#include <iostream>

using namespace std;

int N, W;

int main()
{
    cin >> N >> W;
    
    cout << max(0, 10 * N + (N >= 3) * 20 + (N == 5) * 50 - (W > 1000) * 15);
    
    return 0;
}
