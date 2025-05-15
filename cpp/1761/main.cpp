#include <iostream>
#include <vector>

using namespace std;

int N, M;

vector<pair<int, int>> edge[40001];

int parent[40001][17], dist[40001] = { 0, 0, }, depth[40001] = { 0, };

void init(int p, int cur, int d, int n){
    dist[cur] = d;
    parent[cur][0] = p;
    depth[cur] = n;
    
    for(pair<int, int> c: edge[cur]){
        if(c.first != p) init(cur, c.first, d + c.second, n + 1);
    }
}

int lca(int a, int b){
    if(depth[a] > depth[b]){
        int d = depth[a] - depth[b];
        
        for(int i = 0; i < 17; i++){
            if(d & (1 << i)) a = parent[a][i];
        }
    } else if(depth[b] > depth[a]){
        int d = depth[b] - depth[a];
        
        for(int i = 0; i < 17; i++){
            if(d & (1 << i)) b = parent[b][i];
        }
    }
    
    int i = 16, res = a;
    
    if(a != b){
        for(int i = 16; i >= 0; i--){
            if(parent[a][i] != parent[b][i]){
                a = parent[a][i];
                b = parent[b][i];
            }
            
            res = parent[a][i];
        }
    }
    
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> N;
    
    for(int i = 0; i < N - 1; i++){
        int a, b, c;
        cin >> a >> b >> c;
        
        edge[a].push_back({ b, c });
        edge[b].push_back({ a, c });
    }
    
    init(1, 1, 0, 0);
    
    for(int i = 1; i < 17; i++){
        for(int j = 1; j <= N; j++){
            parent[j][i] = parent[parent[j][i - 1]][i - 1];
        }
    }
    
    cin >> M;
    
    for(int i = 0; i < M; i++){
        int a, b;
        cin >> a >> b;
        
        cout << dist[a] + dist[b] - 2 * dist[lca(a, b)] << '\n';
    }
    
    return 0;
}
