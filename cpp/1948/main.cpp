#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n, m;

vector<pair<int, int>> edge[10001];

int dp, dst;

int dist[10001] = { 0, };

int res = 0;

void dijkstra(){
    priority_queue<pair<int, int>> visit;
    
    visit.push(dp);
    
    while(!visit.empty()){
        pair<int, int> v = visit.top();
        visit.pop();
        
        if(v.second == dst){
            if(v.first == dist[dst]){
                res++;
                
            } else break;
        }
        
        for(pair<int, int> n: edge[v.second]){
            if(dist[v.second] + n.second >= dist[n.first]){
                dist[n.first] = dist[v.second] + n.second;
                visit.push({ dist[n.first], n.first });
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    
    for(int i = 0; i < m; i++){
        int a, b, c;
        cin >> a >> b >> c;
        
        edge[a].push_back({ b, c });
    }
    
    
    
    return 0;
}
