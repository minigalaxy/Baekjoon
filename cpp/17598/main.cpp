#include <iostream>
#include <algorithm>

using namespace std;

string s[9];

int main()
{
    for(int i = 0; i < 9; i++) cin >> s[i];

    sort(s, s + 9);

    cout << s[4];

    return 0;
}
