#include <iostream>

using namespace std;

int N, X;

int A[100000];

int res = 2000000000;

int main()
{
    cin >> N >> X;
    
    for(int i = 0; i < N; i++) cin >> A[i];
    
    for(int i = 0; i < N - 1; i++) res = min(res, X * (A[i] + A[i + 1]));
    
    cout << res;
    
    return 0;
}
