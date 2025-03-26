#include <iostream>
#include <set>
#include <string>
#include <queue>

using namespace std;

int N, M, K;

priority_queue<int, vector<int>, greater<int>> card;

int parent[4000001];

int find_root(int n){
    if(parent[n] == n){
        parent[n] = n + 1;
        return n;
    } else return parent[n] = find_root(parent[n]);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> N >> M >> K;

    for(int i = 0; i < M; i++){
        int t;
        cin >> t;

        card.push(t);
    }

    card.push(0);

    for(int i = card.size() - 1; i > 0; i--){
        int c = card.top();
        card.pop();

        fill(parent + c + 1, parent + card.top() + 1, card.top());
    }

    //for(int i = 1; i <= N; i++) cout << parent[i] << ' ' << i << '\n';

    for(int i = 0; i < K; i++){
        int t;
        cin >> t;

        int c = find_root(t + 1);

        cout << c << '\n';
    }

    return 0;
}
