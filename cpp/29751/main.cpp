#include <iostream>

using namespace std;

double W, H;

int main()
{
    cin >> W >> H;
    
    cout << fixed;
    cout.precision(1);
    
    cout << W * H / 2;
    
    return 0;
}
