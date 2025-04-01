#include <iostream>

using namespace std;

int a, s;

int main()
{
    cin >> a >> s;
    
    if((a + s) % 2 == 1 || s > a) cout << -1;
    else cout << (a + s) / 2 << ' ' << (a - s) / 2;
    
    return 0;
}
