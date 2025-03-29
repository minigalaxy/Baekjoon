#include <iostream>
#include <queue>

using namespace std;

int N, M;

bool board[1000][1000];

int space[1000][1000] = { 0, };

queue<pair<int, int>> visit;

int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

int bfs(int x, int y){
    int c = 0;

    bool visited[1000][1000] = { false, };

    visit.push(make_pair(x, y));
    visited[x][y] = true;

    while(!visit.empty()){
        pair<int, int> pos = visit.front();
        visit.pop();

        c++;

        for(int i = 0; i < 4; i++){
            int nx = pos.first + dx[i];
            int ny = pos.second + dy[i];

            if(nx > -1 && nx < N && ny > -1 && ny < M && !board[nx][ny] && !visited[nx][ny]){
                visit.push(make_pair(nx, ny));
                visited[nx][ny] = true;
            }
        }
    }

    return c;
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
            if(board[i][j]) space[i][j] = bfs(i, j);
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cout << res[i][j];
        }

        cout << '\n';
    }

    return 0;
}
