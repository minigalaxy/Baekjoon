#include <iostream>

using namespace std;

int L;

int main()
{
    cin >> L;

    cout << (L / 5) + (L % 5 > 0);

    return 0;
}
