#include <iostream>
#include <vector>

using namespace std;

int N, M;

vector<int> edge[100001];

int parent[100001][18], depth[100001] = { 0, };

void init(int p, int cur, int n){
    parent[cur][0] = p;
    depth[cur] = n;
    
    for(int c: edge[cur]){
        if(c != p) init(cur, c, n + 1);
    }
}

int lca(int a, int b){
    if(depth[a] > depth[b]){
        int d = depth[a] - depth[b];
        
        for(int i = 0; i < 18; i++){
            if(d & (1 << i)) a = parent[a][i];
        }
    } else if(depth[b] > depth[a]){
        int d = depth[b] - depth[a];
        
        for(int i = 0; i < 18; i++){
            if(d & (1 << i)) b = parent[b][i];
        }
    }
    
    int i = 17, res = a;
    
    if(a != b){
        for(int i = 17; i >= 0; i--){
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
        int a, b;
        cin >> a >> b;
        
        edge[a].push_back(b);
        edge[b].push_back(a);
    }
    
    init(1, 1, 0);
    
    for(int i = 1; i < 18; i++){
        for(int j = 1; j <= N; j++){
            parent[j][i] = parent[parent[j][i - 1]][i - 1];
        }
    }
    
    cin >> M;
    
    for(int i = 0; i < M; i++){
        int a, b;
        cin >> a >> b;
        
        cout << lca(a, b) << '\n';
    }
    
    return 0;
}
