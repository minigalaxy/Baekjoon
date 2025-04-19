#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;

vector<int> edge[1000001];

int mem[1000001][2];

int dfs(int c, bool b){
    visited[c] = true;
    
    if(mem[c][b] == -1){
        mem[c][b] = b;
    
        for(int n: edge[c]){
            if(n != p){
                if(!b) mem[c][b] += dfs(c, n, !b);
                else mem[c][b] += min(dfs(c, n, b), dfs(c, n, !b));
            }
        }
    }
    
    visited[c] = false;
    
    return mem[c][b];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> N;

    for(int i = 0; i < N - 1; i++){
        int u, v;
        cin >> u >> v;
        
        edge[u].push_back(v);
        edge[v].push_back(u);
    }
    
    fill(mem[0], mem[N + 1], -1);
    
    cout << min(dfs(1, true), dfs(1, false));
    
    return 0;
}
