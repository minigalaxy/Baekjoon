#include <iostream>

using namespace std;

int n;

int f[8] = { 1, 2, 3, 4, 5, 4, 3, 2 };

int main()
{
    cin >> n;

    cout << f[(n - 1) % 8];

    return 0;
}
