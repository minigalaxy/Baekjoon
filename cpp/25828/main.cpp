#include <iostream>

using namespace std;

int g, p, t;

int main()
{
    cin >> g >> p >> t;
    
    if(g * p < t * p + g) cout << 1;
    else if(g * p > t * p + g) cout << 2;
    else cout << 0;
    
    return 0;
}
