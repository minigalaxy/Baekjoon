#include <iostream>
#include <algorithm>

using namespace std;

int N;

int A[50], B[50];

int S = 0;

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++) cin >> A[i];
    for(int i = 0; i < N; i++) cin >> B[i];
    
    sort(A, A + N);
    sort(B, B + N, greater<>());
    
    for(int i = 0; i < N; i++) S += A[i] * B[i];
    
    cout << S;
    
    return 0;
}
