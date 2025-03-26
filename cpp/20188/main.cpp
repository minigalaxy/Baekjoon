#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int N;

int A, B;

vector<int> path[300001];

bool visited[300001] = { false, true, };

int ch[300001] = { 0, };

stack<pair<long, long>> q;

long long res = 0;

void init(int n){
    for(int c: path[n]){
        if(!visited[c]){
            visited[c] = true;
            if(ch[n] == 0) ch[n] = c;
            else ch[n] = -1;
            init(c);
        }
    }
}

pair<long, long> solve(int n, int d){
    long long sum = 0, cnt = 0, br = 0;
    pair<long, long> t;

    int stk = 1;

    while(ch[n] > 0){
        n = ch[n];
        stk++;
    }

    for(int c: path[n]){
        if(!visited[c]){
            visited[c] = true;
            t = solve(c, d + 1);
            q.push(t);
            sum += t.first;
            cnt += t.second;
            br++;
        }
    }

    res += d * (cnt * (cnt - 1)) / 2;

    for(int i = 0; i < br; i++){
        res += q.top().first * (cnt - q.top().second);
        res -= d * (q.top().second * (q.top().second - 1) / 2);
        q.pop();
    }

    res += sum;
    res += d * cnt;

    cnt += stk;
    sum += cnt * stk;

    return make_pair(sum, cnt);
}

int main()
{
    cin >> N;

    for(int i = 1; i < N; i++){
        cin >> A >> B;

        path[A].push_back(B);
        path[B].push_back(A);
    }

    solve(1, 0);

    cout << res;

    return 0;
}
