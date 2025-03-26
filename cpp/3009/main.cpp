#include <iostream>
#include <algorithm>

using namespace std;

int x, y;

int h[3] = { 0, 0, 0 }, v[3] = { 0, 0, 0 };

int main()
{
    for(int i = 0; i < 3; i++){
        cin >> x >> y;

        if(h[0] == 0) h[0] = x;
        else if(h[0] != x) h[1] = x;
        h[2] += x;

        if(v[0] == 0) v[0] = y;
        else if(v[0] != y) v[1] = y;
        v[2] += y;
    }

    cout << (h[0] + h[1]) * 2 - h[2] << ' ' << (v[0] + v[1]) * 2 - v[2];

    return 0;
}
