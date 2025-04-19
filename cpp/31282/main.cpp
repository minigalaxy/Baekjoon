#include <iostream>

using namespace std;

int N, M, K;

int main()
{
    cin >> N >> M >> K;
    
    cout << N / (K - M) + (N % (K - M) > 0);
    
    return 0;
}
