#include <iostream>

using namespace std;

int A, B, C;

int main()
{
    cin >> A >> B >> C;

    cout << (A + (B + C) / 60) % 24 << ' ' << (B + C) % 60;

    return 0;
}
