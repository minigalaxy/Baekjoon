#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int M, N, H;

short mat[1000][1000];

int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

queue<pair<int, int>> visit;

int bfs(){
    int day = 0;

    while(!visit.empty()){
        for(int i = visit.size(); i > 0; i--){
            pair<int, int> v = visit.front();
            visit.pop();

            for(int j = 0; j < 4; j++){
                int nx = v.first + dx[j];
                int ny = v.second + dy[j];

                if(nx > -1 && nx < M && ny > -1 && ny < N && mat[nx][ny] == 0){
                    visit.push(make_pair(nx, ny));
                    mat[nx][ny] = 1;
                }
            }
        }

        day++;
    }

    bool f = false;

    for(int i = 0; i < N && !f; i++){
        for(int j = 0; j < M && !f; j++){
            if(mat[j][i] == 0) f = true;
        }
    }

    if(f) return -1;
    else return day - 1;
}

int main()
{
    cin >> M >> N;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> mat[j][i];

            if(mat[j][i] == 1) visit.push(make_pair(j, i));
        }
    }

    cout << bfs();

    return 0;
}
