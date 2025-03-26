#include <iostream>
#include <algorithm>

using namespace std;

int R, C, T;
int A[50][50];
int D[50][50];

int c;

int dc[4] = { 1, 0, -1, 0 };
int dr[4] = { 0, 1, 0, -1 };

int ac;

int res = 0;

int main()
{
    cin >> R >> C >> T;

    for(int r = 0; r < R; r++){
        for(int c = 0; c < C; c++){
            int t;
            cin >> t;

            if(t == -1){
                ac = r;
                A[r][c] = 0;
            } else {
                A[r][c] = t;
            }
        }
    }

    for(int t = 0; t < T; t++){
        for(int r = 0; r < R; r++){
            for(int c = 0; c < C; c++){
                int a = A[r][c] / 5;

                if(a == 0) continue;

                for(int i = 0; i < 4; i++){
                    int nc = c + dc[i];
                    int nr = r + dr[i];

                    if(nc > -1 && nc < C && nr > -1 && nr < R){
                        if(nc != 0 || (nr != ac && nr != ac - 1)){
                            D[nr][nc] += a;
                            A[r][c] -= a;
                        }
                    }
                }
            }
        }

        for(int r = 0; r < R; r++){
            for(int c = 0; c < C; c++){
                if(D[r][c] > 0){
                    A[r][c] += D[r][c];
                    D[r][c] = 0;
                }
            }
        }

        int n = 0;

        for(int c = 1; c < C - 1; c++){
            swap(n, A[ac][c]);
        }

        for(int r = ac; r < R - 1; r++){
            swap(n, A[r][C - 1]);
        }

        for(int c = C - 1; c > 0; c--){
            swap(n, A[R - 1][c]);
        }

        for(int r = R - 1; r > ac; r--){
            swap(n, A[r][0]);
        }

        n = 0;

        for(int c = 1; c < C - 1; c++){
            swap(n, A[ac - 1][c]);
        }

        for(int r = ac - 1; r > 0; r--){
            swap(n, A[r][C - 1]);
        }

        for(int c = C - 1; c > 0; c--){
            swap(n, A[0][c]);
        }

        for(int r = 0; r < ac - 1; r++){
            swap(n, A[r][0]);
        }
    }



    for(int r = 0; r < R; r++){
        for(int c = 0; c < C; c++){
            res += A[r][c];
        }
    }

    cout << res;

    return 0;
}
