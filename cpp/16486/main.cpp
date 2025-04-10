#include <iostream>

using namespace std;

double d[2];

int main()
{
    cin >> d[0] >> d[1];
    
    cout.precision(6);
    cout << fixed;
    
    cout << d[0] * 2 + d[1] * 3.141592 * 2;
    
    return 0;
}
