#include <iostream>
#include <queue>

using namespace std;

int n, m, k;

vector<pair<int, int>> road[1001];

priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> visit;

int dist[1001][2] = { 0, };

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n >> m >> k;
    
    for(int i = 0; i < m; i++){
        int a, b, c;
        cin >> a >> b >> c;
        
        road[a].push_back({ b, c });
    }
    
    visit.push({ 0, 1 });
    
    while(!visit.empty()){
        pair<int, int> v = visit.top();
        visit.pop();
        
        if(dist[v.second][1] == k) continue;
        
        dist[v.second][0] = v.first;
        dist[v.second][1]++;
        
        for(pair<int, int> p: road[v.second]){
            visit.push({ v.first + p.second, p.first });
        }
    }
    
    for(int i = 1; i <= n; i++){
        if(dist[i][1] == k) cout << dist[i][0] << '\n';
        else cout << "-1\n";
    }
    
    return 0;
}
