#include <iostream>

using namespace std;

int N, M, K;

int res = 0;

int main()
{
    cin >> N >> M >> K;
    
    res = min(N / 2, M);
    
    N -= res * 2;
    M -= res;
    
    if(K <= N + M) cout << res;
    else {
        cout << max(0, res - (K - N - M) / 3 - ((K - N - M) % 3 > 0));
    }
    
    return 0;
}
