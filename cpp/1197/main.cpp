#include <iostream>
#include <queue>

using namespace std;

int V, E;

priority_queue<pair<int, pair<int, int>>> edge;

int parent[10001];

long long res = 0;

int find_root(int node){
    return (parent[node] == node) ? node : parent[node] = find_root(parent[node]);
}

bool union_root(int a, int b){
    int ra = find_root(a);
    int rb = find_root(b);

    if(ra == rb) return false;

    if(ra > rb) parent[ra] = rb;
    else parent[rb] = ra;

    return true;
}

int main()
{
    cin >> V >> E;

    for(int i = 1; i <= V; i++) parent[i] = i;

    for(int i = 0; i < E; i++){
        int A, B, C;
        cin >> A >> B >> C;

        edge.push(make_pair(-C, make_pair(A, B)));
    }

    while(!edge.empty()){
        pair<int, pair<int, int>> p = edge.top();
        edge.pop();

        if(union_root(p.second.first, p.second.second)) res -= p.first;
    }

    cout << res;

    return 0;
}
