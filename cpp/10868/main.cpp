#include <iostream>

using namespace std;

int N, M;

int a, b;

int A[100000], B[400000];

int init(int l, int r, int i){
    if(l == r) return B[i] = A[l];
    
    int m = (l + r) / 2;
    
    return B[i] = min(init(l, m, i * 2), init(m + 1, r, i * 2 + 1));
}

int query(int l, int r, int i, int a, int b){
    if(b < l || a > r) return 1000000000;
    
    if(a <= l && r <= b) return B[i];
    
    int m = (l + r) / 2;
    
    return min(query(l, m, i * 2, a, b), query(m + 1, r, i * 2 + 1, a, b));
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
        
        cout << query(0, N - 1, 1, a - 1, b - 1) << '\n';
    }
    
    return 0;
}
