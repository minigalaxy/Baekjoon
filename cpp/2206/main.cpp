#include <iostream>
#include <queue>

using namespace std;

int N, M;

bool m[1000][1000];

queue<pair<pair<int, int>, bool>> visit;
bool visited[1000][1000][2] = { false, };

int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

int bfs(){
    visit.push(make_pair(make_pair(0, 0), true));
    visited[0][0][0] = true;
    visited[0][0][1] = true;

    int dist = 1;

    while(!visit.empty()){
        for(int i = visit.size(); i > 0; i--){
            pair<pair<int, int>, int> v = visit.front();
            visit.pop();

            //cout << v.first.first << v.first.second << '\n';

            if(v.first.first == N - 1 && v.first.second == M - 1) return dist;

            for(int j = 0; j < 4; j++){
                int nx = v.first.first + dx[j];
                int ny = v.first.second + dy[j];

                if(nx > -1 && nx < N && ny > -1 && ny < M && !visited[nx][ny][v.second]){
                    if(m[nx][ny]){
                        if(v.second){
                            visit.push(make_pair(make_pair(nx, ny), false));
                            visited[nx][ny][0] = true;
                        }
                    } else {
                        visit.push(make_pair(make_pair(nx, ny), v.second));
                        visited[nx][ny][0] = true;
                        if(v.second) visited[nx][ny][1] = true;
                    }
                }
            }
        }

        dist++;
    }

    return -1;
}

int main()
{
    cin >> N >> M;

    cin.ignore();

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++) m[i][j] = getchar() - '0';
        cin.ignore();
    }

    cout << bfs();

    return 0;
}
