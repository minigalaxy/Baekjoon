#include <iostream>

using namespace std;

int N, M;

int A[100000];

int mn[400000], mx[400000];

int a, b;

pair<int, int> min_max(int a, int b) { return { min(a, b), max(a, b) }; }

pair<int, int> init(int l, int r, int i){
    if(l == r) return { mn[i] = A[l], mx[i] = A[l] };
    
    int m = (l + r) / 2;
    
    pair<int, int> pl = init(l, m, i * 2), pr = init(m + 1, r, i * 2 + 1);
    
    return { mn[i] = min(pl.first, pr.first), mx[i] = max(pl.second, pr.second) };
}

pair<int, int> inquiry(int l, int r, int i, int a, int b){
    if(l > b || r < a) return { 1000000000, -1000000000 };

    if(a <= l && r <= b) return { mn[i], mx[i] };
    
    int m = (l + r) / 2;
    
    pair<int, int> pl = inquiry(l, m, i * 2, a, b), pr = inquiry(m + 1, r, i * 2 + 1, a, b);
    
    return { min(pl.first, pr.first), max(pl.second, pr.second) };
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> N >> M;
    
    for(int i = 0; i < N; i++) cin >> A[i];
    
    init(0, N - 1, 1);
    
    for(int i = 0; i < M; i++){
        cin >> a >> b;
        
        pair<int, int> res = inquiry(0, N - 1, 1, a - 1, b - 1);
        
        cout << res.first << ' ' << res.second << '\n';
    }
    
    return 0;
}
