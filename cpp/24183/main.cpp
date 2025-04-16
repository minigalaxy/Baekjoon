#include <iostream>

using namespace std;

double C4, A3, A4;

int main()
{
    cin >> C4 >> A3 >> A4;
    
    cout.precision(6);
    cout << fixed;
    
    cout << 2 * C4 * 0.229 * 0.324 + 2 * A3 * 0.297 * 0.42 + A4 * 0.21 * 0.297;
    
    return 0;
}
