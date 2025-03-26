#include <iostream>
#include <deque>

using namespace std;

int dx[8] = { 1, 1, 1, 0, 0, -1, -1, -1 };
int dy[8] = { 1, 0, -1, 1, -1, 1, 0, -1 };

int N, M, K;

int n[10][10];
int A[10][10];
int C[10][10];

deque<int> t[10][10];

int main()
{
    fill(n[0], n[10], 5);

    cin >> N >> M >> K;

    for(int r = 0; r < N; r++){
        for(int c = 0; c < N; c++){
            cin >> A[r][c];
        }
    }

    for(int i = 0; i < M; i++){
        int x, y, z;
        cin >> x >> y >> z;

        t[x - 1][y - 1].push_back(z);
    }

    for(int y = 0; y < K; y++){
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                for(int k = t[i][j].size() - 1; k > -1; k--){
                    if(t[i][j][k] > n[i][j]){
                        for(int l = 0; l < k + 1; l++){
                            n[i][j] += t[i][j].front() / 2;
                            t[i][j].pop_front();
                        }
                        M -= k + 1;
                        break;
                    } else {
                        n[i][j] -= t[i][j][k];
                        t[i][j][k]++;
                    }
                }
            }
        }

        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                n[i][j] += A[i][j] + C[i][j];
                C[i][j] = 0;

                for(int k = t[i][j].size() - 1; k > -1; k--){
                    if(t[i][j][k] % 5 == 0){
                        for(int k = 0; k < 8; k++){
                            int tx = i + dx[k];
                            int ty = j + dy[k];

                            if(tx > -1 && tx < N && ty > -1 && ty < N){
                                t[tx][ty].push_back(1);

                                M++;
                            }
                        }
                    }
                }
            }
        }
    }

    cout << M;

    return 0;
}
