#include <iostream>

using namespace std;

int N;

int m[128][128];

int res[2] = { 0, 0 };

int dc(int x1, int x2, int y1, int y2){
    if(x1 == x2){
        res[m[x1][y1]]++;
        return m[x1][y1];
    }

    int xm = (x1 + x2) / 2;
    int ym = (y1 + y2) / 2;

    int a = dc(x1, xm, y1, ym);
    int b = dc(xm + 1, x2, y1, ym);
    int c = dc(x1, xm, ym + 1, y2);
    int d = dc(xm + 1, x2, ym + 1, y2);

    if(a + b + c + d == 4){
        res[1] -= 3;
        return 1;
    } else if(a + b + c + d == 0){
        res[0]-= 3;
        return 0;
    } else {
        return 5;
    }
}

int main()
{
    cin >> N;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++) cin >> m[j][i];
    }

    dc(0, N - 1, 0, N - 1);

    cout << res[0] << '\n' << res[1];

    return 0;
}
