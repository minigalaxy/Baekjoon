#include <iostream>

using namespace std;

int N, M;

int board[50][50];

int res = 0;

int main()
{
    cin >> N >> M;
    cin.ignore();

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++) board[i][j] = getchar();
        getchar();
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N - i; j++){
            for(int k = 0; k < M - i; k++){
                if(board[j][k] == board[j + i][k] && board[j + i][k] == board[j + i][k + i] && board[j + i][k + i] == board[j][k + i]) res = max(res, (i + 1) * (i + 1));
            }
        }
    }

    cout << res;

    return 0;
}
