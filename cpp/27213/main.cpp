#include <iostream>

using namespace std;

int m, n;

int main()
{
    cin >> m >> n;
    
    if(m == 1 || n == 1) cout << max(n, m);
    else cout << 2 * m + 2 * n - 4;
    
    return 0;
}
