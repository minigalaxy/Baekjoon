#include <iostream>
#include <cmath>

using namespace std;

double D, H, W;

int main()
{
    cin >> D >> H >> W;
    
    cout << int(sqrt((D * D * H * H) / (H * H + W * W))) << ' ' << int(sqrt((D * D * W * W) / (H * H + W * W)));
    
    return 0;
}
