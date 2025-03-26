#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int N, K;

int tank[100][100] = { 0, };

int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 };

void arrange(int x, int y){
    int arrangement[100][100] = { 0, };

    for(int i = x; i < N; i++){
        for(int j = 0; j < y; j++){
            if(tank[i][j] > 0){
                for(int k = 0; k < 4; k++){
                    int nx = i + dx[k];
                    int ny = j + dy[k];

                    if(nx >= x && nx < N && ny > -1 && ny <= y){
                        if(tank[nx][ny] != 0 && tank[i][j] > tank[nx][ny]){
                            int dif = (tank[i][j] - tank[nx][ny]) / 5;

                            arrangement[i][j] -= dif;
                            arrangement[nx][ny] += dif;
                        }
                    }
                }
            }
        }
    }

    for(int i = x; i < N; i++){
        for(int j = 0; j < y; j++) tank[i][j] += arrangement[i][j];
    }
}

bool org_tank(){
    int m = 10000;

    for(int i = 0; i < N; i++){
        m = min(m, tank[i][0]);
    }

    for(int i = 0; i < N; i++){
        if(tank[i][0] == m) tank[i][0]++;
    }

    int ox = 1, oy = 1, x = N, px = 0;

    while(x - ox >= oy){
        x -= ox;
        px += ox;

        for(int i = 0; i < ox; i++){
            for(int j = 0; j < oy; j++){
                tank[px + j][ox - i] = tank[px - ox + i][j];
                tank[px - ox + i][j] = 0;
            }
        }

        ox++;
        swap(ox, oy);
    }

    arrange(px, oy);

    queue<int> q;

    for(int i = px; i < N; i++){
        for(int j = 0; j < oy; j++){
            if(tank[i][j] == 0) break;

            q.push(tank[i][j]);
            tank[i][j] = 0;
        }
    }

    for(int i = 0; i < N; i++){
        tank[i][0] = q.front();
        q.pop();
    }

    for(int i = 0; i < N / 2; i++){
        tank[N / 2 + i][1] = tank[N / 2 - 1 - i][0];
        tank[N / 2 - 1 - i][0] = 0;
    }

    for(int i = 0; i < N / 4; i++){
        tank[N / 4 + N / 2 + i][2] = tank[N / 4 + N / 2 - 1 - i][1];
        tank[N / 4 + N / 2 - 1 - i][1] = 0;
        tank[N / 4 + N / 2 + i][3] = tank[N / 4 + N / 2 - 1 - i][0];
        tank[N / 4 + N / 2 - 1 - i][0] = 0;
    }

    arrange(N / 4 + N / 2, 4);

    for(int i = N / 4 + N / 2; i < N; i++){
        for(int j = 0; j < 4; j++){
            q.push(tank[i][j]);
            tank[i][j] = 0;
        }
    }

    for(int i = 0; i < N; i++){
        tank[i][0] = q.front();
        q.pop();
    }

    int mx = 0, mn = 10000;

    for(int i = 0; i < N; i++){
        mx = max(mx, tank[i][0]);
        mn = min(mn, tank[i][0]);
    }

    return (mx - mn) > K;
}

int main()
{
    cin >> N >> K;

    for(int i = 0; i < N; i++) cin >> tank[i][0];

    int res = 1;

    while(org_tank()) res++;

    cout << res;

    return 0;
}
