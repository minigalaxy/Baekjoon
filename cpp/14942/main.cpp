#include <iostream>
#include <vector>

using namespace std;

int n;

int E[100001];

vector<pair<int, int>> edge[100001];

int dist[100001], depth[100001];

int parent[100001][17] = { 0, };

void init(int p, int c, int d, int d2){
    dist[c] = d;
    depth[c] = d2;
    
    for(pair<int, int> e: edge[c]){
        if(e.first != p){
            init(c, e.first, d + e.second, d2 + 1);
            parent[e.first][0] = c;
        }
    }
}

void init_parent(int p, int c, int l){
    for(pair<int, int> e: edge[c]){
        if(e.first != p){
            init_parent(c, e.first, l);
            if(depth[e.first] >= (1 << l)) parent[e.first][l] = parent[parent[e.first][l - 1]][l - 1];
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n;
    
    for(int i = 1; i <= n; i++) cin >> E[i];
    
    for(int i = 0; i < n - 1; i++){
        int a, b, c;
        cin >> a >> b >> c;
        
        edge[a].push_back({ b, c });
        edge[b].push_back({ a, c });
    }
    
    init(0, 1, 0, 0);
    
    for(int i = 1; i < 17; i++) init_parent(0, 1, i);
    
    for(int i = 1; i <= n; i++){
        int c = i, e = E[i];
        
        for(int j = 16; j >= 0; j--){
            if(depth[c] >= (1 << j)){
                if(dist[c] - dist[parent[c][j]] <= e){
                    e -= dist[c] - dist[parent[c][j]];
                    c = parent[c][j];
                }
            }
        }
        
        cout << c << '\n';
    }
    
    return 0;
}
