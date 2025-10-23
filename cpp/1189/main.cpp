#include <iostream>

using namespace std;

int R, C, K;

bool board[5][5];

bool visited[5][5] = { false, };

int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

int dfs(int x, int y, int d){
    if(x == 0 && y == C - 1) return (d == K);
    
    int ret = 0;
    
    for(int i = 0; i < 4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        if(-1 < nx && nx < R && -1 < ny && ny < C && board[nx][ny] && !visited[nx][ny]){
            visited[nx][ny] = true;
            ret += dfs(nx, ny, d + 1);
            visited[nx][ny] = false;
        }
    }
    
    return ret;
}

int main()
{
    cin >> R >> C >> K;
    cin.ignore();
    
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++) board[i][j] = (getchar() == '.');
        getchar();
    }
    
    visited[R - 1][0] = true;
    
    cout << dfs(R - 1, 0, 1);
    
    return 0;
}
