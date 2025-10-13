#include <iostream>
#include <algorithm>

using namespace std;

int N, M;

int A[200'000];

int D;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> N >> M;
    
    for(int i = 0; i < N; i++) cin >> A[i];
    
    sort(A, A + N);
    
    for(int i = 0; i < M; i++){
        cin >> D;
        
        int idx = lower_bound(A, A + N, D) - A;
        
        if(idx != N && A[idx] == D) cout << idx << '\n';
        else cout << "-1\n";
    }
    
    return 0;
}
