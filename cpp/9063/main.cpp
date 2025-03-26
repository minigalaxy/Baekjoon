#include <iostream>

using namespace std;

int N;

int h[2] = { 10000, -10000 }, v[2] = { 10000, -10000 };

int main()
{
    cin >> N;

    for(int i = 0; i < N; i++){
        int x, y;
        cin >> x >> y;

        h[0] = min(h[0], x);
        h[1] = max(h[1], x);

        v[0] = min(v[0], y);
        v[1] = max(v[1], y);
    }

    cout << (h[1] - h[0]) * (v[1] - v[0]);

    return 0;
}
