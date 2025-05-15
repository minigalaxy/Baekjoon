#include <iostream>
#include <queue>

using namespace std;

int N, M, F;

bool board[20][20];

pair<int, int> taxi;

pair<int, int> P[20][20];
bool e[20][20] = { false, };

int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

int find_p(){
    int f = 0;

    queue<pair<int, int>> visit;
    bool visited[20][20] = { false, };

    visit.push(taxi);
    visited[taxi.first][taxi.second] = true;

    pair<int, int> p = { 20, 20 };

    while(!visit.empty()){
        for(int i = visit.size(); i > 0; i--){
            pair<int, int> v = visit.front();
            visit.pop();

            if(e[v.first][v.second]){
                if(v.second < p.second || (v.second == p.second && v.first < p.first)){
                    p = { v.first, v.second };
                }
            }

            for(int j = 0; j < 4; j++){
                int nx = v.first + dx[j];
                int ny = v.second + dy[j];

                if(nx > -1 && nx < N && ny > -1 && ny < N){
                    if(!board[nx][ny] && !visited[nx][ny]){
                        visit.push({ nx, ny });
                        visited[nx][ny] = true;
                    }
                }
            }
        }

        if(p.first != 20) break;

        f++;
    }

    taxi = p;
    e[taxi.first][taxi.second] = false;

    if(p.first != 20) return f;
    else return -1;
}

int find_d(pair<int, int> dst){
    int f = 0;

    queue<pair<int, int>> visit;
    bool visited[20][20] = { false, };

    visit.push(taxi);
    visited[taxi.first][taxi.second] = true;

    while(!visit.empty()){
        for(int i = visit.size(); i > 0; i--){
            pair<int, int> v = visit.front();
            visit.pop();

            if(v == dst){
                taxi = v;

                return f;
            }

            for(int j = 0; j < 4; j++){
                int nx = v.first + dx[j];
                int ny = v.second + dy[j];

                if(nx > -1 && nx < N && ny > -1 && ny < N){
                    if(!board[nx][ny] && !visited[nx][ny]){
                        visit.push({ nx, ny });
                        visited[nx][ny] = true;
                    }
                }
            }
        }

        f++;
    }

    return -1;
}

int main()
{
    cin >> N >> M >> F;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++) cin >> board[j][i];
    }

    cin >> taxi.second >> taxi.first;
    taxi.first--;
    taxi.second--;

    for(int i = 0; i < M; i++){
        int x1, y1, x2, y2;
        cin >> y1 >> x1 >> y2 >> x2;

        P[x1 - 1][y1 - 1] = { x2 - 1, y2 - 1 };
        e[x1 - 1][y1 - 1] = true;
    }

    for(int i = 0; i < M; i++){
        int f;

        f = find_p();

        if(f > F || f == -1){
            cout << -1;

            return 0;
        } else F -= f;

        f = find_d(P[taxi.first][taxi.second]);

        if(f > F || f == -1){
            cout << -1;

            return 0;
        } else F += f;
    }

    cout << F;

    return 0;
}
