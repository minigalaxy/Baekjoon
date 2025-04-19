#include <iostream>
#include <cmath>

using namespace std;

long long a;

double PI = 3.14159265;

int main()
{
    cin >> a;
    
    cout.precision(6);
    cout << fixed;
    
    cout << sqrt(a / PI) * 2 * PI;
    
    return 0;
}
