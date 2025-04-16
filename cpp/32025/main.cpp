#include <iostream>

using namespace std;

int H, W;

int main()
{
    cin >> H >> W;
    
    cout << min(H, W) * 100 / 2;
    
    return 0;
}
