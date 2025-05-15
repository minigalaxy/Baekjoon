#include <iostream>
#include <queue>

using namespace std;

struct Shark {
    int x, y, d;
    bool alive = true;
};

int N, M, K;

int board[20][20][401] = { 0, };

Shark shark[400];

int p[400][4][4];

int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { -1, 1, 0, 0 };

queue<pair<int, int>> smell[400];

int cnt;

void move_shark(int i){
    for(int j = 0; j < 4; j++){
        int nx = shark[i].x + dx[p[i][shark[i].d][j]];
        int ny = shark[i].y + dy[p[i][shark[i].d][j]];

        if(nx > -1 && nx < N && ny > -1 && ny < N && board[nx][ny][400] == 0){
            shark[i].x = nx;
            shark[i].y = ny;
            shark[i].d = p[i][shark[i].d][j];

            return;
        }
    }

    for(int j = 0; j < 4; j++){
        int nx = shark[i].x + dx[p[i][shark[i].d][j]];
        int ny = shark[i].y + dy[p[i][shark[i].d][j]];

        if(nx > -1 && nx < N && ny > -1 && ny < N && board[nx][ny][i] > 0){
            shark[i].x = nx;
            shark[i].y = ny;
            shark[i].d = p[i][shark[i].d][j];

            return;
        }
    }
}

int main()
{
    cin >> N >> M >> K;

    cnt = M;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            int t;
            cin >> t;

            if(t > 0){
                smell[t - 1].push({ j, i });
                board[j][i][t - 1] = 1;
                board[j][i][400] = 1;

                shark[t - 1].x = j;
                shark[t - 1].y = i;
            }
        }
    }

    for(int i = 0; i < M; i++){
        int d;
        cin >> d;

        shark[i].d = d - 1;
    }

    for(int i = 0; i < M; i++){
        for(int j = 0; j < 4; j++){
            for(int k = 0; k < 4; k++){
                cin >> p[i][j][k];

                p[i][j][k]--;
            }
        }
    }

    for(int res = 1; res <= 1000; res++){
        for(int i = 0; i < M; i++){
            if(shark[i].alive) move_shark(i);
        }
        for(int i = 0; i < M; i++){
            if(shark[i].alive){
                smell[i].push({ shark[i].x, shark[i].y });
                board[shark[i].x][shark[i].y][i]++;
                board[shark[i].x][shark[i].y][400]++;
            }
            if(res >= K && !smell[i].empty()){
                board[smell[i].front().first][smell[i].front().second][i]--;
                board[smell[i].front().first][smell[i].front().second][400]--;
                smell[i].pop();
            }
        }

        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                bool flag = false;

                for(int k = 0; k < M; k++){
                    if(shark[k].alive){
                        if(shark[k].x == j && shark[k].y == i){
                            if(flag){
                                shark[k].alive = false;
                                cnt--;
                            } else flag = true;
                        }
                    }
                }
            }
        }

        if(cnt == 1){
            cout << res;

            return 0;
        }
    }

    cout << -1;

    return 0;
}
