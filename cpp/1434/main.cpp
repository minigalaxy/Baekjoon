#include <iostream>

using namespace std;

int N, M, A[50], B[50];

int res = 0;

int main()
{
    cin >> N >> M;
    
    
    for(int i = 0; i < N; i++) cin >> A[i];
    for(int i = 0; i < M; i++) cin >> B[i];
    
    int i = 0, j = 0;
    
    while(j < M){
        if(A[i] < B[j]) res += A[i++];
        else A[i] -= B[j++];
    }
    
    while(i < N) res += A[i++];
    
    cout << res;
    
    return 0;
}
