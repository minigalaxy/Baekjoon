#include <iostream>

using namespace std;

int a, x, b, y, T;

int main()
{
    cin >> a >> x >> b >> y >> T;
    
    cout << a + max(0, T - 30) * x * 21 << ' ' << b + max(0, T - 45) * y * 21;
    
    return 0;
}
