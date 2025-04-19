#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int N, M, R;

int u, v;

vector<int> edge[100001];

queue<int> visit;
bool visited[100001] = { false, };

int o[100001] = { 0, };

int cnt = 1;

void bfs(int s){
    visit.push(s);
    visited[s] = true;
    o[s] = cnt++;
    
    while(!visit.empty()){
        int v = visit.front();
        visit.pop();
        
        sort(edge[v].begin(), edge[v].end());
        
        for(int n: edge[v]){
            if(!visited[n]){
                visit.push(n);
                visited[n] = true;
                o[n] = cnt++;
            }
        }
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
    
    bfs(R);
    
    for(int i = 1; i <= N; i++) cout << o[i] << '\n';
    
    return 0;
}
