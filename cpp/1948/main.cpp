#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n, m;

vector<pair<int, int>> edge[10001], r_edge[10001];

int indegree[10001] = { 0, };

int dp, dst;

int dist[10001] = { 0, };

queue<int> visit;

bool visited[10001] = { false, };

int res = 0;

int main()
{
    cin >> n >> m;
    
    for(int i = 0; i < m; i++){
        int a, b, c;
        cin >> a >> b >> c;
        
        edge[a].push_back({ b, c });
        r_edge[b].push_back({ a, c });
        
        indegree[b]++;
    }
    
    cin >> dp >> dst;
    
    visit.push(dp);
    
    while(!visit.empty()){
        int v = visit.front();
        visit.pop();
            
        for(pair<int, int> p: edge[v]){
            if(dist[v] + p.second > dist[p.first]) dist[p.first] = dist[v] + p.second;
            
            if(--indegree[p.first] == 0) visit.push(p.first);
        }
    }
    
    visit.push(dst);
    visited[dst] = true;
    
    while(!visit.empty()){
        int v = visit.front();
        visit.pop();
        
        for(pair<int, int> p: r_edge[v]){
            if(dist[p.first] == dist[v] - p.second){
                if(!visited[p.first]){
                    visit.push(p.first);
                    visited[p.first] = true;
                }
                
                res++;
            }
        }
    }
    
    cout << dist[dst] << '\n' << res;
    
    return 0;
}
