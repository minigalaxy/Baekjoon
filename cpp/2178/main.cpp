#include <iostream>
#include <queue>

using namespace std;

int N, M;

int x = 0, y = 0;

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

bool mat[100][100];

queue<pair<int, int>> visit;
bool visited[100][100] = { false, };

int bfs(){
    int t = 0;

    visit.push(make_pair(x, y));
    visited[x][y] = true;

    while(!visit.empty()){
        t++;

        for(int i = visit.size(); i > 0; i--){
            pair<int, int> v = visit.front();
            visit.pop();

            if(v.first == M - 1 && v.second == N - 1) return t;

            for(int j = 0; j < 4; j++){
                int nx = v.first + dx[j];
                int ny = v.second + dy[j];

                if(nx > -1 && nx < M && ny > -1 && ny < N && mat[nx][ny] && !visited[nx][ny]){
                    visit.push(make_pair(nx, ny));
                    visited[nx][ny] = true;
                }
            }
        }
    }
}

int main()
{
    cin >> N >> M;

    cin.ignore();

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            mat[j][i] = getchar() - '0';
        }
        cin.ignore();
    }

    cout << bfs();

    return 0;
}
