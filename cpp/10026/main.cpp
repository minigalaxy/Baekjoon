#include <iostream>
#include <queue>

using namespace std;

int N;

char paint[100][100];

int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

queue<pair<int, int>> visit;
bool visited[100][100] = { false, };

int res = 0;

void bfs(int x, int y){
    if(visited[x][y]) return;

    res++;

    char col = paint[x][y];

    visit.push(make_pair(x, y));
    visited[x][y] = true;

    while(!visit.empty()){
        pair<int, int> v = visit.front();
        visit.pop();

        for(int i = 0; i < 4; i++){
            int nx = v.first + dx[i];
            int ny = v.second + dy[i];

            if(nx > -1 && nx < N && ny > -1 && ny < N && paint[nx][ny] == col && !visited[nx][ny]){
                visit.push(make_pair(nx, ny));
                visited[nx][ny] = true;
            }
        }
    }
}

int main()
{
    cin >> N;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++) cin >> paint[j][i];
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++) bfs(i, j);
    }

    cout << res << ' ';

    fill(visited[0], visited[100], 0);

    res = 0;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(paint[j][i] == 'G') paint[j][i] = 'R';
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++) bfs(i, j);
    }

    cout << res;

    return 0;
}
