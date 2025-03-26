#include <iostream>
#include <queue>

using namespace std;

int n, m;
int x, y;

int mat[1000][1000];

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

queue<pair<int, int>> visit;
bool visited[1000][1000] = { false, };

int dist[1000][1000] = { 0, };

void bfs(){
    int d = 0;

    visit.push(make_pair(x, y));
    visited[x][y] = true;

    while(!visit.empty()){
        for(int i = visit.size(); i > 0; i--){
            pair<int, int> v = visit.front();
            visit.pop();

            dist[v.first][v.second] = d;

            for(int j = 0; j < 4; j++){
                int nx = v.first + dx[j];
                int ny = v.second + dy[j];

                if(nx > -1 && nx < m && ny > -1 && ny < n && mat[nx][ny] && !visited[nx][ny]){
                    visit.push(make_pair(nx, ny));
                    visited[nx][ny] = true;
                }
            }
        }

        d++;
    }
}

int main()
{
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> mat[j][i];

            if(mat[j][i] == 2){
                x = j;
                y = i;
            }
        }
    }

    bfs();

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << ((!dist[j][i] && mat[j][i] == 1) ? -1 : dist[j][i]) << ' ';
        }
        cout << '\n';
    }

    return 0;
}
