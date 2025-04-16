#include <iostream>

using namespace std;

int w[2], h[2];

int main()
{
    cin >> w[0] >> h[0] >> w[1] >> h[1];
    
    cout << (w[0] > w[1] + 1 && h[0] > h[1] + 1);
    
    return 0;
}
