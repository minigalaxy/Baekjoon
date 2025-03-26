#include <iostream>
#include <algorithm>

using namespace std;

int N;

int A[20][20];

int res = 40000;

int cal(int x, int y, int d1, int d2){
    int p[5] = { 0, };

    for(int i = 0; i < y - d1; i++){
        p[0] += A[x + d1][i];
        p[1] += A[N - 1][i] - A[x + d1][i];
    }
    for(int i = y + d2 + 1; i < N; i++){
        p[2] += A[x + d2 - 1][i];
        p[3] += A[N - 1][i] - A[x + d2 - 1][i];
    }

    for(int i = 0; i < d1; i++) p[0] += A[x + i][y - i - 1];
    for(int i = 0; i <= d2; i++) p[1] += A[N - 1][y - d1 + i] - A[x + d1 + i][y - d1 + i];
    for(int i = 0; i <= d2; i++) if(x + i - 1 >= 0) p[2] += A[x + i - 1][y + i];
    for(int i = 0; i < d1; i++) p[3] += A[N - 1][y + d2 - i] - A[x + d2 + i][y + d2 - i];

    for(int i = 0; i < N; i++) p[4] += A[N - 1][i];
    for(int i = 0; i < 4; i++) p[4] -= p[i];

    return abs(*max_element(p, p + 5) - *min_element(p, p + 5));
}

int main()
{
    cin >> N;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            int t;
            cin >> t;

            if(j > 0) A[j][i] = A[j - 1][i] + t;
            else A[j][i] = t;
        }
    }

    for(int x = 0; x < N - 2; x++){
        for(int y = 1; y < N - 1; y++){
            for(int d1 = 1; x + d1 + 1 < N && 0 <= y - d1; d1++){
                for(int d2 = 1; x + d1 + d2 < N && y + d2 < N; d2++){
                    res = min(res, cal(x, y, d1, d2));
                }
            }
        }
    }

    cout << res;

    return 0;
}
