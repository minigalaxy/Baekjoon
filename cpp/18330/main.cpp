#include <iostream>

using namespace std;

int n, k;

int main()
{
    cin >> n >> k;

    cout << min(n, k + 60) * 1500 + (n - min(n, k + 60)) * 3000;

    return 0;
}
