#include <iostream>
#include <queue>
#include <vector>
#include <tuple>

using namespace std;

int M, N, H;

short mat[100][100][100];

int dx[6] = { 1, -1, 0, 0, 0, 0 };
int dy[6] = { 0, 0, 1, -1, 0, 0 };
int dz[6] = { 0, 0, 0, 0, 1, -1 };

queue<tuple<char, char, char>> visit;

int bfs(){
    int day = 0;

    while(!visit.empty()){
        for(int i = visit.size(); i > 0; i--){
            tuple<char, char, char> v = visit.front();
            visit.pop();

            for(int j = 0; j < 6; j++){
                int nx = get<0>(v) + dx[j];
                int ny = get<1>(v) + dy[j];
                int nz = get<2>(v) + dz[j];

                if(nx > -1 && nx < M && ny > -1 && ny < N && nz > -1 && nz < H && mat[nx][ny][nz] == 0){
                    visit.push(make_tuple(nx, ny, nz));
                    mat[nx][ny][nz] = 1;
                }
            }
        }

        day++;
    }

    bool f = false;

    for(int i = 0; i < H && !f; i++){
        for(int j = 0; j < N && !f; j++){
            for(int k = 0; k < M && !f; k++){
                if(mat[k][j][i] == 0) f = true;
            }
        }
    }

    if(f) return -1;
    else return day - 1;
}

int main()
{
    cin >> M >> N >> H;

    for(int i = 0; i < H; i++){
        for(int j = 0; j < N; j++){
            for(int k = 0; k < M; k++){
                cin >> mat[k][j][i];

                if(mat[k][j][i] == 1) visit.push(make_tuple(k, j, i));
            }
        }
    }

    cout << bfs();

    return 0;
}
