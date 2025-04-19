#include <iostream>

using namespace std;

int N, M, K;

int main()
{
    cin >> N >> M >> K;
    
    cout << min(M, K) + min(N - M, N - K);
    
    return 0;
}
