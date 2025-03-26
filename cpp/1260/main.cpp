#include <iostream>
#include <algorithm>
#include <set>
#include <queue>

using namespace std;

int N, M, V;

vector<int> adj_list[1001];

int visited[1001];

void dfs(int c){
    cout << c << ' ';

    for(int t: adj_list[c]){
        visited[c] = true;
        if(!visited[t]) dfs(t);
    }
}

void bfs(int c){
    queue<int> visit;

    visit.push(c);
    visited[c] = true;

    while(!visit.empty()){
        int v = visit.front();
        visit.pop();

        cout << v << ' ';

        for(int t: adj_list[v]){
            if(!visited[t]) visit.push(t);
            visited[t] = true;
        }
    }
}

int main()
{
    cin >> N >> M >> V;

    for(int i = 0; i < M; i++){
        int a, b;
        cin >> a >> b;

        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    for(int i = 0; i < 1001; i++){
        sort(adj_list[i].begin(), adj_list[i].end());
    }

    dfs(V);

    cout << '\n';

    fill(visited, visited + 1001, false);

    bfs(V);

    return 0;
}
