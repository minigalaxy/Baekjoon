#include <iostream>

using namespace std;

int M, N;

int m[500][500], mem[500][500];

int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

int solve(int x, int y){
    if(mem[x][y] == -1){
        mem[x][y] = 0;
            
        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if(nx > -1 && nx < M && ny > -1 && ny < N && m[nx][ny] > m[x][y]){
                mem[x][y] += solve(nx, ny);
            }
        }
    }
    
    return mem[x][y];
}

int main()
{
    fill(mem[0], mem[500], -1);
    
    mem[0][0] = 1;
    
    cin >> M >> N;
    
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++) cin >> m[i][j];
    }
    
    cout << solve(M - 1, N - 1);
    
    return 0;
}
