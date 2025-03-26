#include <iostream>

using namespace std;

int N, M, K;

bool board[2000][2000] = { false, };
int psum_b[2001][2001] = { 0, };

int res = 4000000;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> N >> M >> K;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            char t;
            cin >> t;

            if(t == 'W') board[i][j] = true;
        }
    }

    bool col_b = false, low_b;

    for(int i = 0; i < N; i++){
        low_b = col_b;

        for(int j = 0, sb = 0, sw = 0; j < M; j++){
            if(board[i][j] != low_b) sb++;

            psum_b[i + 1][j + 1] = psum_b[i][j + 1] + sb;

            low_b = !low_b;
        }

        col_b = !col_b;
    }

    for(int i = 0; i <= N - K ; i++){
        for(int j = 0; j <= M - K; j++){
            int t = psum_b[i + K][j + K] - psum_b[i][j + K] - psum_b[i + K][j] + psum_b[i][j];

            res = min(res, min(t, K * K - t));
        }
    }

    cout << res;

    return 0;
}
