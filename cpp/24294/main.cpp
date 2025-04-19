#include <iostream>

using namespace std;

int w[2], h[2];

int main()
{
    cin >> w[0] >> h[0] >> w[1] >> h[1];
    
    cout << 2 * max(w[0], w[1]) + 2 * (h[0] + h[1]) + 4;
    
    return 0;
}
