#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

struct Planet {
    int x, y, z, n;
};
struct Tunnel {
    int s, e, c;
    
    bool operator<(const Tunnel &t) const {
        return c > t.c;
    }
};

int N;

Planet px[100000], py[100000], pz[100000];

bool compare_x(Planet a, Planet b){ return a.x < b.x; }
bool compare_y(Planet a, Planet b){ return a.y < b.y; }
bool compare_z(Planet a, Planet b){ return a.z < b.z; }

priority_queue<Tunnel> T;

int parent[100000];

int res = 0;

int find_root(int c){
    return ((parent[c] == c) ? c : parent[c] = find_root(parent[c]));
}

bool union_root(int a, int b){
    int A = find_root(a);
    int B = find_root(b);
    
    if(A == B) return false;
    
    if(A < B) parent[B] = A;
    else parent[A] = B;
    
    return true;
}

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        int x, y, z;
        cin >> x >> y >> z;
        
        px[i] = { x, y, z, i };
        py[i] = { x, y, z, i };
        pz[i] = { x, y, z, i };
    }
    
    sort(px, px + N, compare_x);
    sort(py, py + N, compare_y);
    sort(pz, pz + N, compare_z);
    
    for(int i = 0; i < N - 1; i++){
        T.push({ px[i].n, px[i + 1].n, min(px[i + 1].x - px[i].x, min(abs(px[i + 1].y - px[i].y), abs(px[i + 1].z - px[i].z))) });
        T.push({ py[i].n, py[i + 1].n, min(py[i + 1].y - py[i].y, min(abs(py[i + 1].x - py[i].x), abs(py[i + 1].z - py[i].z))) });
        T.push({ pz[i].n, pz[i + 1].n, min(pz[i + 1].z - pz[i].z, min(abs(pz[i + 1].y - pz[i].y), abs(pz[i + 1].x - pz[i].x))) });
    }
    
    for(int i = 0; i < N; i++) parent[i] = i;
    
    while(!T.empty()){
        Tunnel t = T.top();
        T.pop();
            
        if(union_root(t.s, t.e)) res += t.c;
    }
    
    cout << res;
    
    return 0;
}
