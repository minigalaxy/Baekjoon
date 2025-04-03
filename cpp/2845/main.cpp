#include <iostream>

using namespace std;

int L, P;

int p[5];

int main()
{
    cin >> L >> P;

    for(int i = 0; i < 5; i++) cin >> p[i];

    for(int i = 0; i < 5; i++) cout << p[i] - L * P << ' ';

    return 0;
}
