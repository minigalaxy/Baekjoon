#include <iostream>

using namespace std;

int n[2], k[2];

int main()
{
    cin >> n[0] >> k[0] >> n[1] >> k[1];

    cout << n[0] * k[0] + n[1] * k[1];

    return 0;
}
