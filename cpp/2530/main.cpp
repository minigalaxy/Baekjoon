#include <iostream>

using namespace std;

int A, B, C, D;

int main()
{
    cin >> A >> B >> C >> D;

    C += D;

    B += C / 60;
    C %= 60;

    A += B / 60;
    B %= 60;

    A %= 24;

    cout << A << ' ' << B << ' ' << C;

    return 0;
}
