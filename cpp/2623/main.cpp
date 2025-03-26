#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int N, M;

int n, cur, pre;

vector<int> order[1001];
int indegree[1001] = { 0, };

queue<int> visit;

vector<int> res;

int main()
{
    cin >> N >> M;

    for(int i = 0; i < M; i++){
        cin >> n;

        cin >> pre;

        for(int i = 0; i < n - 1; i++){
            cin >> cur;

            order[pre].push_back(cur);
            indegree[cur]++;

            pre = cur;
        }
    }

    for(int i = 1; i <= N; i++){
        if(indegree[i] == 0) visit.push(i);
    }

    while(!visit.empty()){
        int v = visit.front();
        visit.pop();

        res.push_back(v);

        for(int n: order[v]){
            if(--indegree[n] == 0) visit.push(n);
        }
    }

    if(res.size() == N){
        for(int r: res) cout << r << '\n';
    } else cout << 0;



    return 0;
}
