#include <iostream>

using namespace std;

double a;

int main()
{
    cin >> a;
    
    cout.precision(3);
    cout << fixed;
    
    cout << 100 / a << '\n' << 100 / (100 - a);
    
    return 0;
}
