#include <iostream>

using namespace std;

int X, Y;

int main()
{
    cin >> X >> Y;

    for(int i = 0; i < max(X, Y) - min(X, Y); i++) cout << 1;
    for(int i = max(X, Y) - min(X, Y); i < max(X, Y); i++) cout << 2;

    return 0;
}
