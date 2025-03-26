#include <iostream>
#include <queue>

using namespace std;

int N, M;

priority_queue<pair<int, pair<int, int>>> road;

int parent[100001];

long long res = 0;
int t = 0;

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
    cin >> N >> M;

    for(int i = 1; i <= N; i++) parent[i] = i;

    for(int i = 0; i < M; i++){
        int A, B, C;
        cin >> A >> B >> C;

        road.push(make_pair(-C, make_pair(A, B)));
    }

    while(!road.empty()){
        pair<int, pair<int, int>> p = road.top();
        road.pop();

        if(union_root(p.second.first, p.second.second)){
            res -= p.first;
            t = -p.first;
        }
    }

    cout << res - t;

    return 0;
}
