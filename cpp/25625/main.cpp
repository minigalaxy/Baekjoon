#include <iostream>

using namespace std;

int x, y;

int main()
{
    cin >> x >> y;
    
    if(y >= x) cout << y - x;
    else cout << x + y;
    
    return 0;
}
