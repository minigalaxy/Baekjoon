#include <iostream>
#include <algorithm>

using namespace std;

int N;

int A[50], B[50], C[50];

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> A[i] >> B[i];
        
        C[i] = A[i] - B[i];
    }
    
    sort(C, C + N);
    
    if(N % 2 == 0) cout << C[N / 2] - C[N / 2 - 1] + 1;
    else cout << 1;
    
    return 0;
}
