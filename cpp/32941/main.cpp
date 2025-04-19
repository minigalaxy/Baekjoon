#include <iostream>
#include <algorithm>

using namespace std;

int T, X;

int N;

int K;

int A[1000];

bool res = true;

int main()
{
    cin >> T >> X;
    
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> K;
        
        for(int j = 0; j < K; j++) cin >> A[j];
        
        if(find(A, A + K, X) == A + K) res = false;
    }
    
    cout << ((res) ? "YES" : "NO");
    
    return 0;
}
