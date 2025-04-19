#include <iostream>

using namespace std;

double h, l, a, b;

int main()
{
    cin >> h >> l >> a >> b;
    
    cout << (((a <= l && b / 2 <= h) || (b <= l && a / 2 <= h)) ? "YES" : "NO");
    
    return 0;
}
