#include <iostream>

using namespace std;

int a, b, c;

int main()
{
    cin >> a >> b >> c;
    
    if(a == b && b == c) cout << 2;
    else if(2 * max(max(a, b), c) * max(max(a, b), c) - a * a - b * b - c * c == 0) cout << 1;
    else cout << 0;
    
    return 0;
}
