#include <iostream>

int N, M, K;

int A[100][100], B[100][100], res[100][100] = { 0, };

using namespace std;

int main()
{
    cin >> N >> M;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++) cin >> A[i][j];
    }

    cin >> M >> K;

    for(int i = 0; i < M; i++){
        for(int j = 0; j < K; j++) cin >> B[i][j];
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            for(int k = 0; k < K; k++){
                res[i][k] += A[i][j] * B[j][k];
            }
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < K; j++) cout << res[i][j] << ' ';
        cout << '\n';
    }

    return 0;
}
