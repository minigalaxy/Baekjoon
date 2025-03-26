#include <iostream>
#include <queue>

using namespace std;

int N, M;

char mat[600][600];

int res = 0;

queue<pair<int, int>> visit;
bool visited[600][600];

int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };

int x, y;

void bfs(){
    visit.push(make_pair(x, y));
    visited[x][y] = true;

    while(!visit.empty()){
        pair<int, int> v = visit.front();
        visit.pop();

        if(mat[v.first][v.second] == 'P') res++;

        for(int i = 0; i < 4; i++){
            int nx = v.first + dx[i];
            int ny = v.second + dy[i];

            if(nx > -1 && nx < M && ny > -1 && ny < N && mat[nx][ny] != 'X' && !visited[nx][ny]){
                visit.push(make_pair(nx, ny));
                visited[nx][ny] = true;
            }
        }
    }
}

int main()
{
    cin >> N >> M;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> mat[j][i];

            if(mat[j][i] == 'I'){
                x = j;
                y = i;
            }
        }
    }

    bfs();

    if(res == 0) cout << "TT";
    else cout << res;

    return 0;
}
