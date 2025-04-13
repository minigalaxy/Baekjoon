#include <iostream>

using namespace std;

int a[3], c[3];

int main()
{
    cin >> a[0] >> a[1] >> a[2] >> c[0] >> c[1] >> c[2];
    
    cout << c[0] - a[2] << ' ' << c[1] / a[1] << ' ' << c[2] - a[0];
    
    return 0;
}
