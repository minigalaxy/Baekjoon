#include <iostream>
#include <set>

using namespace std;

int N, M;

int A[100000], B[400000] = { 0, };

set<int> C;

int i, j, k;

int init(int l, int r, int idx){
    if(l == r) return B[idx] = (A[l] > k);
    
    int m = (l + r) / 2;
    
    return B[i] = init(l, m, idx * 2) + init(m + 1, r, idx * 2 + 1);
}

int inquiry(int l, int r, int idx){
    if(j < l || i > r) return 0;
    if(i <= l && r <= j) return B[idx];
    
    int m = (l + r) / 2;
    
    return inquiry(l, m, idx * 2) + inquiry(m + 1, r, idx * 2 + 1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> N;
    
    for(int n = 0; n < N; n++){
        cin >> A[n];
        
        C.insert(A[n]);
    }
    
    init();
    
    cin >> M;
    
    for(int n = 0; n < M; n++){
        cin >> i >> j >> k;
        
        cout << inquiry(0, N - 1, 1) << '\n';
    }
    
    return 0;
}
