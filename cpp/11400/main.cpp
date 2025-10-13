#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int V, E;

vector<int> edge[100'001];

int num[100'001] = { 0, }, low[100'001];

int counter = 0;

vector<pair<int, int>> articulation_bridge;

void dfs(int parent, int cur){
    low[cur] = num[cur] = ++counter;
    
    int child = 0;
    
    for(int next: edge[cur]){
        if(next != parent){
            if(num[next] == 0){
                child++;
                    
                dfs(cur, next);
                
                if(num[cur] < low[next]) articulation_bridge.push_back({ min(cur, next), max(cur, next) });
                
                low[cur] = min(low[cur], low[next]);
            }
            else low[cur] = min(low[cur], num[next]);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> V >> E;
    
    for(int i = 0; i < E; i++){
        int A, B;
        cin >> A >> B;
        
        edge[A].push_back(B);
        edge[B].push_back(A);
    }
    
    for(int i = 1; i <= V; i++){
        if(num[i] == 0) dfs(0, i);
    }
    
    sort(articulation_bridge.begin(), articulation_bridge.end());
    
    cout << articulation_bridge.size() << '\n';
    
    for(pair<int, int> p: articulation_bridge) cout << p.first << ' ' << p.second << '\n';
    
    return 0;
}
