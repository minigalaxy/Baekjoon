#include <iostream>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

const int MAX = 10'000'001;

int N, M;

int S, D;

vector<pair<int, int>> edge[500], redge[500];

int dist[500];

bool is_Short[500][500];

priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> visit;
queue<int> visit_2;

bool visited[500];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    while(true){
        cin >> N >> M;
        
        if(N == 0) break;
        
        for(int i = 0; i < N; i++) edge[i].clear();
        for(int i = 0; i < N; i++) redge[i].clear();
        
        fill(is_Short[0], is_Short[500], false);
        
        cin >> S >> D;
        
        for(int i = 0; i < M; i++){
            int U, V, P;
            cin >> U >> V >> P;
            
            edge[U].push_back({ V, P });
            redge[V].push_back({ U, P });
        }
        
        fill(dist, dist + N, MAX);
        
        visit.push({ 0, S });
        dist[S] = 0;
        
        while(!visit.empty()){
            pair<int, int> v = visit.top();
            visit.pop();
            
            for(pair<int, int> p: edge[v.second]){
                if(dist[v.second] + p.second < dist[p.first]){
                    dist[p.first] = dist[v.second] + p.second;
                    visit.push({ dist[p.first], p.first });
                }
            }
        }
        
        fill(visited, visited + N, false);
        
        visit_2.push(D);
        visited[D] = true;
        
        while(!visit_2.empty()){
            int v = visit_2.front();
            visit_2.pop();
            
            for(pair<int, int> p: redge[v]){
                if(dist[p.first] == dist[v] - p.second){
                    if(!visited[p.first]){
                        visited[p.first] = true;
                        visit_2.push(p.first);
                    }
                    
                    is_Short[p.first][v] = true;
                }
            }
        }
        
        fill(dist, dist + N, MAX);
        
        visit.push({ 0, S });
        dist[S] = 0;
        
        while(!visit.empty()){
            pair<int, int> v = visit.top();
            visit.pop();
            
            for(pair<int, int> p: edge[v.second]){
                if(!is_Short[v.second][p.first] && dist[v.second] + p.second < dist[p.first]){
                    dist[p.first] = dist[v.second] + p.second;
                    visit.push({ dist[p.first], p.first });
                }
            }
        }
        
        cout << ((dist[D] < MAX) ? dist[D] : -1) << '\n';
    }
    
    return 0;
}
