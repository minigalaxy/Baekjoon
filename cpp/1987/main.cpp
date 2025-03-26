#include <iostream>

using namespace std;

int R, C;

char board[20][20];
int visited[20][20] = { 0, };
bool used[26] = { false, };

int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

int res = 0;

void bt(int x, int y, int tmp){
    if(visited[x][y] == 2 || used[board[x][y]]) return;

    if(visited[x][y] == 0){
        used[board[x][y]] = true;
        tmp++;
    }

    res = max(res, tmp);

    visited[x][y]++;

    for(int i = 0; i < 4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx > -1 && nx < C && ny > -1 && ny < R){
            bt(nx, ny, tmp);
        }
    }

    visited[x][y]--;

    if(visited[x][y] == 0){
        used[board[x][y]] = false;
        tmp--;
    }
}

int main()
{
    cin >> R >> C;

    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            cin >> board[j][i];
            board[j][i] -= 65;
        }
    }

    bt(0, 0, 0);

    cout << res;

    return 0;
}
