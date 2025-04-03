#include <iostream>
#include <queue>

using namespace std;

int N, M;

bool board[1000][1000];

bool b_visited[1000][1000] = { false, };

queue<pair<int, int>> visit;
queue<pair<int, int>> border;

int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

int res[1000][1000] = { 0, };

void bfs(int x, int y){
    int c = 0;

    bool visited[1000][1000] = { false, };

    visit.push(make_pair(x, y));
    visited[x][y] = true;
    b_visited[x][y] = true;

    while(!visit.empty()){
        pair<int, int> pos = visit.front();
        visit.pop();

        c++;

        for(int i = 0; i < 4; i++){
            int nx = pos.first + dx[i];
            int ny = pos.second + dy[i];

            if(nx > -1 && nx < N && ny > -1 && ny < M && !visited[nx][ny]){
                if(!board[nx][ny]){
                    visit.push(make_pair(nx, ny));
                    visited[nx][ny] = true;
                    b_visited[nx][ny] = true;
                } else {
                    border.push(make_pair(nx, ny));
                    visited[nx][ny] = true;
                }
            }
        }
    }

    while(!border.empty()){
        pair<int, int> pos = border.front();
        border.pop();

        res[pos.first][pos.second] += c;
    }
}

int main()
{
    cin >> N >> M;
    cin.ignore();

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            board[i][j] = getchar() - '0';
        }
        getchar();
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(!board[i][j] && !b_visited[i][j]) bfs(i, j);
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cout << (res[i][j] + board[i][j]) % 10;
        }

        cout << '\n';
    }

    return 0;
}
