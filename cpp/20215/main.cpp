#include <iostream>
#include <cmath>

using namespace std;

double w, h;

int main()
{
    cin >> w >> h;
    
    cout.precision(6);
    cout << fixed;
    
    cout << w + h - sqrt(w * w + h * h);
    
    return 0;
}
