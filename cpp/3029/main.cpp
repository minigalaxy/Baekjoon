#include <iostream>

using namespace std;

int h[2], m[2], s[2];

int main()
{
    char c;
    cin >> h[0] >> c >> m[0] >> c >> s[0];
    cin >> h[1] >> c >> m[1] >> c >> s[1];

    m[0] += h[0] * 60;
    m[1] += h[1] * 60;

    s[0] += m[0] * 60;
    s[1] += m[1] * 60;

    s[0] = (s[1] - s[0] + 24 * 60 * 60) % (24 * 60 * 60);

    if(s[0] == 0) s[0] = 24 * 60 * 60;

    cout.width(2);
    cout.fill('0');

    cout << s[0] / 60 / 60 << ':';

    s[0] %= 60 * 60;

    cout.width(2);

    cout << s[0] / 60 << ':';

    s[0] %= 60;

    cout.width(2);

    cout << s[0];

    return 0;
}
