#include <iostream>

using namespace std;

int n, m;

int o, a, b;

int parent[1000001];

int find_root(int c){
    return ((c == parent[c]) ? c : parent[c] = find_root(parent[c]));
}

void union_root(int a, int b){
    int ra = find_root(a);
    int rb = find_root(b);
    
    if(ra < rb) parent[rb] = ra;
    else parent[ra] = rb;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n >> m;
    
    for(int i = 0; i <= n; i++) parent[i] = i;
    
    for(int i = 0; i < m; i++){
        cin >> o >> a >> b;
        
        if(o == 0) union_root(a, b);
        else cout << ((find_root(a) == find_root(b)) ? "YES\n" : "NO\n");
    }
    
    return 0;
}
