#include <iostream>

using namespace std;

int a[2], c, n;

int main()
{
    cin >> a[0] >> a[1] >> c >> n;

    if(a[0] > c) cout << 0;
    else if(a[0] * n + a[1] > c * n) cout << 0;
    else cout << 1;

    return 0;
}
