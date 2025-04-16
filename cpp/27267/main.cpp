#include <iostream>

using namespace std;

int a, b, c, d;

int main()
{
    cin >> a >> b >> c >> d;
    
    if(a * b > c * d) cout << 'M';
    else if(a * b < c * d) cout << 'P';
    else cout << 'E';
    
    return 0;
}
