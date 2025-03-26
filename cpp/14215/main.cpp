#include <iostream>

using namespace std;

int a, b, c;

int main()
{
    cin >> a >> b >> c;

    if(a + b + c - max(a, max(b, c)) * 2 > 0) cout << a + b + c;
    else cout << (a + b + c - max(a, max(b, c))) * 2 - 1;

    return 0;
}
