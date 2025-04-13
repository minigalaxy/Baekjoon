#include <iostream>
#include <cmath>

using namespace std;

int A, B;

int main()
{
    cin >> A >> B;
    
    cout.precision(4);
    cout << fixed;
    
    cout << 1.0 / (1.0 + pow(10.0, (B - A) / 400.0));
    
    return 0;
}
