#include <iostream>

using namespace std;

int x, y, w, h;

int main()
{
    cin >> x >> y >> w >> h;

    cout << min(min(x, y), min(abs(x - w), abs(y - h)));

    return 0;
}
