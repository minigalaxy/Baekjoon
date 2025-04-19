#include <iostream>

using namespace std;

double k;

int main()
{
    cin >> k;
    
    cout.precision(2);
    cout << fixed;
    
    cout << max(100.0, min(2000.0, k / 100 + 25));
    
    return 0;
}
