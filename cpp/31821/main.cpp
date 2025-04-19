#include <iostream>

using namespace std;

int N;

int A[10];

int M;

int B;

int res = 0;

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++) cin >> A[i];
    
    cin >> M;
    
    for(int i = 0; i < M; i++){
        cin >> B;
        
        res += A[B - 1];
    }
    
    cout << res;
    
    return 0;
}
