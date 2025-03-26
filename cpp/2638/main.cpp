#include <iostream>
#include <queue>

using namespace std;

int N, M;

bool cheese[100][100];

short temp[100][100];

queue<pair<int, int>> visit;
bool visited[100][100];

int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

int bfs(){
    int time = -1;
    bool flag;

    do {
        flag = false;

        fill(visited[0], visited[100], false);
        fill(temp[0], temp[100], 0);

        visit.push(make_pair(0, 0));
        visited[0][0] = true;

        while(!visit.empty()){
            pair<int, int> v = visit.front();
            visit.pop();

            for(int j = 0; j < 4; j++){
                int nx = v.first + dx[j];
                int ny = v.second + dy[j];

                if(nx > -1 && nx < N && ny > -1 && ny < M && !visited[nx][ny]){
                    if(cheese[nx][ny]){
                        if(++temp[nx][ny] >= 2){
                            cheese[nx][ny] = false;
                            visited[nx][ny] = true;
                        }
                        flag = true;
                    } else {
                        visit.push(make_pair(nx, ny));
                        visited[nx][ny] = true;
                    }
                }
            }
        }

        time++;
    } while(flag);

    return time;
}

int main()
{
    cin >> N >> M;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++) cin >> cheese[i][j];
    }

    cout << bfs();

    return 0;
}
