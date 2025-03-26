#include <iostream>
#include <vector>

using namespace std;

int N, L, R;

int A[50][50];
bool v[50][50];

int c, s;

bool f;

int r;

vector<int> vx;
vector<int> vy;

void bfs(int x, int y){
    v[x][y] = true;
    vx.push_back(x);
    vy.push_back(y);

    s += A[x][y];
    c++;

    if(x > 0 && !v[x - 1][y] && abs(A[x - 1][y] - A[x][y]) >= L && abs(A[x - 1][y] - A[x][y]) <= R) bfs(x - 1, y);
    if(x < N - 1 && !v[x + 1][y] && abs(A[x + 1][y] - A[x][y]) >= L && abs(A[x + 1][y] - A[x][y]) <= R) bfs(x + 1, y);
    if(y > 0 && !v[x][y - 1] && abs(A[x][y - 1] - A[x][y]) >= L && abs(A[x][y - 1] - A[x][y]) <= R) bfs(x, y - 1);
    if(y < N - 1 && !v[x][y + 1] && abs(A[x][y + 1] - A[x][y]) >= L && abs(A[x][y + 1] - A[x][y]) <= R) bfs(x, y + 1);
}

int main()
{
    cin >> N >> L >> R;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> A[j][i];
        }
    }

    for(int n = 0; n <= 2000; n++){
        f = false;
        fill(v[0], v[50], false);


        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){


                if(!v[i][j]){
                    bfs(i, j);

                    for(int k = 0; k < c; k++){
                        if(A[vx[k]][vy[k]] != int(s / c)){
                            f = true;
                            A[vx[k]][vy[k]] = int(s / c);
                        }
                    }

                    c = 0;
                    s = 0;

                    vx.clear();
                    vy.clear();
                }
            }
        }

        if(!f){
            r = n;
            break;
        }
    }

    cout << r;

    return 0;
}


