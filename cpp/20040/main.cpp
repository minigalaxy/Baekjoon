#include <iostream>

using namespace std;

int n, m;

int parent[500000];

int res = 0;

int find_root(int node){
    return (parent[node] == node) ? node : parent[node] = find_root(parent[node]);
}

bool union_root(int a, int b){
    int ra = find_root(a);
    int rb = find_root(b);

    if(ra == rb) return false;

    parent[ra] = rb;

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> n >> m;

    for(int i = 0; i < n; i++) parent[i] = i;

    for(int i = 1; i <= m; i++){
        int a, b;
        cin >> a >> b;

        if(!union_root(a, b) && !res){
            res = i;
        }
    }

    cout << res;

    return 0;
}
