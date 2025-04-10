#include <iostream>
#include <vector>

using namespace std;

int V, E;

int a, b, c;

long long dist[401][401];

long long res = 1600000000;

int main()
{
    cin >> V >> E;
    
    fill(dist[0], dist[401], 1600000000);
    
    for(int i = 0; i < E; i++){
        cin >> a >> b >> c;
        
        dist[a][b] = c;
    }
    
    for(int i = 1; i <= V; i++){
        for(int j = 1; j <= V; j++){
            for(int k = 1; k <= V; k++){
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
            }
        }
    }
    
    for(int i = 1; i <= V; i++) res = min(res, dist[i][i]);
    
    cout << ((res < 1600000000) ? res : -1);
    
    return 0;
}
