#include <iostream>

using namespace std;

int m, a, b;

int main()
{
    cin >> m >> a >> b;
    
    if(b < a) cout << b + (m - a);
    else cout << b - a;
    
    return 0;
}
