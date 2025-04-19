#include <iostream>

using namespace std;

int X, L, R;

int main()
{
    cin >> X >> L >> R;

    cout << max(L, min(R, X));

    return 0;
}
