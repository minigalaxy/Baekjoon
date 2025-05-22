#include <iostream>

using namespace std;

int N, M, K;

int A[1000000];

int res = 0;

int main()
{
    cin >> N >> M >> K;
    
    for(int i = 0; i < N; i++) cin >> A[i];
    
    cout << res;
    
    return 0;
}
