#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M, R;

int u, v;

vector<int> edge[100001];

bool visited[100001] = { false, };

int o[100001] = { 0, };

int cnt = 1;

void dfs(int c){
    visited[c] = true;
    o[c] = cnt++;
    
    sort(edge[c].begin(), edge[c].end());
    
    for(int n: edge[c]){
        if(!visited[n]) dfs(n);
    }
}

int main()
{
    cin >> N >> M >> R;
    
    for(int i = 0; i < M; i++){
        cin >> u >> v;
        
        edge[u].push_back(v);
        edge[v].push_back(u);
    }
    
    dfs(R);
    
    for(int i = 1; i <= N; i++) cout << o[i] << '\n';
    
    return 0;
}
