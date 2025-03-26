#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct heater{
    int x, y, d;
};

//(r, c)
int R, C, K;

int temp[21][21] = { 0, };

int W;

//1 : right(0, 1), 2 : left(0, -1), 3 : up(-1, 0), 4 : down(1, 0)
bool wall[21][21][5] = { false, };

vector<pair<int, int>> target;

vector<heater> H;

int dr[5] = { 0, 0, 0, -1, 1 };
int dc[5] = { 0, 1, -1, 0, 0 };

int res = 0;

bool turn(){
    if(res > 100) return false;

    queue<pair<int, int>> visit;
    bool visited[21][21];

    for(heater h: H){
        fill(visited[0], visited[21], false);

        visit.push(make_pair(h.x + dr[h.d], h.y + dc[h.d]));
        visited[h.x + dr[h.d]][h.y + dc[h.d]] = true;

        int t = 5;

        while(!visit.empty() && t > 0){
            for(int i = visit.size(); i > 0; i--){
                pair<int, int> v = visit.front();
                visit.pop();

                temp[v.first][v.second] += t;

                if(h.d >= 3){
                    int r = v.first + dr[h.d];
                    int c = v.second + dc[h.d];

                    if(r > 0 && r <= R && c > 0 && c <= C && !visited[r][c] && !wall[v.first][v.second][h.d]){
                        visit.push(make_pair(r, c));
                        visited[r][c] = true;
                    }

                    for(int j = 1; j <= 2; j++){
                        int nr = r + dr[j];
                        int nc = c + dc[j];

                        if(nr > 0 && nr <= R && nc > 0 && nc <= C && !visited[nr][nc] && !wall[v.first][v.second][j] && !wall[nr][nc][7 - h.d]){
                            visit.push(make_pair(nr, nc));
                            visited[nr][nc] = true;
                        }
                    }
                } else {
                    int r = v.first + dr[h.d];
                    int c = v.second + dc[h.d];

                    if(r > 0 && r <= R && c > 0 && c <= C && !visited[r][c] && !wall[v.first][v.second][h.d]){
                        visit.push(make_pair(r, c));
                        visited[r][c] = true;
                    }

                    for(int j = 3; j <= 4; j++){
                        int nr = r + dr[j];
                        int nc = c + dc[j];

                        if(nr > 0 && nr <= R && nc > 0 && nc <= C && !visited[nr][nc] && !wall[v.first][v.second][j] && !wall[nr][nc][3 - h.d]){
                            visit.push(make_pair(nr, nc));
                            visited[nr][nc] = true;
                        }
                    }
                }
            }

            t--;
        }

        while(!visit.empty()) visit.pop();
    }

    int mod[21][21] = { 0, };

    for(int r = 1; r <= R; r++){
        for(int c = 1; c <= C; c++){
            for(int d = 1; d <= 4; d++){
                int nr = r + dr[d];
                int nc = c + dc[d];

                if(nr > 0 && nr <= R && nc > 0 && nc <= C && !wall[r][c][d]){
                    int dif = (temp[r][c] - temp[nr][nc]) / 4;

                    if(dif > 0){
                        mod[r][c] -= dif;
                        mod[nr][nc] += dif;
                    }
                }
            }
        }
    }

    for(int r = 1; r <= R; r++){
        for(int c = 1; c <= C; c++){
            temp[r][c] += mod[r][c];
        }
    }

    for(int r = 1; r <= R; r++){
        if(temp[r][1] > 0) temp[r][1]--;
        if(temp[r][C] > 0) temp[r][C]--;
    }

    for(int c = 2; c < C; c++){
        if(temp[1][c] > 0) temp[1][c]--;
        if(temp[R][c] > 0) temp[R][c]--;
    }

    res++;

    bool f = false;

    for(pair<int, int> t: target){
        if(temp[t.first][t.second] < K) f = true;
    }

    return f;
}

int main()
{
    cin >> R >> C >> K;

    for(int r = 1; r <= R; r++){
        for(int c = 1; c <= C; c++){
            int t;
            cin >> t;

            if(t == 5){
                target.push_back(make_pair(r, c));
            } else if(t > 0){
                H.push_back({ r, c, t });
            }
        }
    }

    cin >> W;

    for(int i = 0; i < W; i++){
        int x, y, t;
        cin >> x >> y >> t;

        if(t == 0){
            wall[x][y][3] = true;
            wall[x - 1][y][4] = true;
        } else {
            wall[x][y][1] = true;
            wall[x][y + 1][2] = true;
        }
    }

    while(turn());

    cout << res;

    return 0;
}
