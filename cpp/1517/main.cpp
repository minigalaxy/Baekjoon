#include <iostream>

using namespace std;

int N;

int A[500000], S[500000];

long long merge(int l, int r, int m){
    int i = l, j = m + 1, k = l;
    long long res = 0;
    
    while(i <= m && j <= r){
        if(A[i] <= A[j]) S[k++] = A[i++];
        else {
            res += m - i + 1;
            
            S[k++] = A[j++];
        }
    }
    
    while(i <= m) S[k++] = A[i++];
    while(j <= r) S[k++] = A[j++];
    
    for(int i = l; i <= r; i++) A[i] = S[i];
    
    return res;
}

long long merge_sort(int l, int r){
    if(l == r) return 0;
    
    int m = (l + r) / 2;
    
    return merge_sort(l, m) + merge_sort(m + 1, r) + merge(l, r, m);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> N;
    
    for(int i = 0; i < N; i++) cin >> A[i];
    
    cout << merge_sort(0, N - 1);
    
    return 0;
}
