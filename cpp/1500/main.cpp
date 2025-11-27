#include <iostream>

using namespace std;

int S, K;

long long res = 1;

int main()
{
    cin >> S >> K;
    
    for(int i = 0; i < K; i++){
        if(i < S % K) res *= S / K + 1;
        else res *= S / K;
    }
    
    cout << res;
    
    return 0;
}
