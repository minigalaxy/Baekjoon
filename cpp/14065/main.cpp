#include <iostream>

using namespace std;

double x;

int main()
{
    cin >> x;
    
    cout.precision(6);
    cout << fixed;
    
    cout << 378541.1784 / 1609.344 / x;
    
    return 0;
}
