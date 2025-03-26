#include <iostream>

using namespace std;

int N, r, c;

int dc(int x1, int x2, int y1, int y2, int t, int d){
    if(x1 == x2) return t;

    int xm = (x1 + x2) / 2;
    int ym = (y1 + y2) / 2;

    if(r <= ym){
        if(c <= xm){
            return dc(x1, xm, y1, ym, t, d + 1);
        } else {
            return dc(xm + 1, x2, y1, ym, t + (1 << (N - d)) * (1 << (N - d)), d + 1);
        }
    } else {
        if(c <= xm){
            return dc(x1, xm, ym + 1, y2, t + (1 << (N - d)) * (1 << (N - d)) * 2, d + 1);
        } else {
            return dc(xm + 1, x2, ym + 1, y2, t + (1 << (N - d)) * (1 << (N - d)) * 3, d + 1);
        }
    }
}

int main()
{
    cin >> N >> r >> c;

    cout << dc(0, (1 << N) - 1, 0, (1 << N) - 1, 0, 1);

    return 0;
}
