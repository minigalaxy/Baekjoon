#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n;

int weight[10001];
vector<int> child[10001];

int res = 0;

int dp(int cur){
    int m1, m2;
    priority_queue<int> w;

    for(int c: child[cur]){
        w.push(dp(c) + weight[c]);
    }
    w.push(0);
    w.push(0);

    m1 = w.top();
    w.pop();
    m2 = w.top();

    res = max(res, m1 + m2);

    return max(m1, m2);
}

int main()
{
    cin >> n;

    for(int i = 0; i < n - 1; i++){
        int p, c, w;
        cin >> p >> c >> w;

        weight[c] = w;
        child[p].push_back(c);
    }

    dp(1);

    cout << res;

    return 0;
}
