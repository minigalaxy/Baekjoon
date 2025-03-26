#include <iostream>

using namespace std;

int N, M;

bool board[50][50];

int r = 32;

int main()
{
    cin >> N >> M;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            char t;
            cin >> t;

            board[i][j] = (t == 'W');
        }
    }

    for(int i = 0; i < N - 7; i++){
        for(int j = 0; j < M - 7; j++){
            int c1 = 0;
            int c2 = 0;
            bool t = false;

            for(int k = 0; k < 8; k++){
                for(int l = 0; l < 8; l++){
                    if(board[i + k][j + l] == t) c1++;
                    else c2++;

                    t = !t;
                }
                t = !t;
            }

            if(c1 < r) r = c1;
            if(c2 < r) r = c2;
        }
    }

    cout << r;

    return 0;
}
