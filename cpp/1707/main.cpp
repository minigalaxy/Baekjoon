#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int K;

int V, E;

int u, v;

vector<int> edge[20001];

queue<int> visit;

int group[20001] = { 0, };

bool bfs(int s){
    while(!visit.empty()) visit.pop();
    
    int g = 1;
    
    visit.push(s);
    group[s] = g;
    
    while(!visit.empty()){
        g *= -1;
            
        for(int i = visit.size(); i > 0; i--){
            int v = visit.front();
            visit.pop();
            
            for(int n: edge[v]){
                if(group[n] == 0){
                    visit.push(n);
                    group[n] = g;
                } else if(group[n] != g) return false;
            }
        }
    }
    
    return true;
}

int main()
{
    cin >> K;
    
    for(int i = 0; i < K; i++){
        cin >> V >> E;
        
        fill(group + 1, group + V + 1, 0);
        
        for(int j = 1; j <= V; j++) edge[j].clear();
        
        for(int j = 0; j < E; j++){
            cin >> u >> v;
            
            edge[u].push_back(v);
            edge[v].push_back(u);
        }
        
        bool f = true;
        
        for(int j = 1; j <= V && f; j++){
            if(group[j] == 0){
                if(!bfs(j)){
                    f = false;
                    break;
                }
            }
        }
        
        cout << ((f) ? "YES\n" : "NO\n");
    }
    
    return 0;
}
