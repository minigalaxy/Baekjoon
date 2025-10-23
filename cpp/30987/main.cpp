#include <iostream>

using namespace std;

int x1, x2;

int a, b, c, d, e;

int main()
{
    cin >> x1 >> x2;
    
    cin >> a >> b >> c >> d >> e;
    
    cout << (a / 3) * (x2 * x2 * x2 - x1 * x1 * x1) + ((b - d) / 2) * (x2 * x2 - x1 * x1) + (c - e) * (x2 - x1);
    
    return 0;
}
