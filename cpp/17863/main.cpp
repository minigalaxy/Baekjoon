#include <iostream>

using namespace std;

string s;

int main()
{
    cin >> s;

    cout << ((s[0] == '5' && s[1] == '5' && s[2] == '5') ? "YES" : "NO");

    return 0;
}
