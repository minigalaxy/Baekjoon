#include <iostream>

using namespace std;

int N, M;

bool S[100][100];

bool visited[100][100] = { false, };

int res[2] = { 0, 0 };

int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 };

int dfs(int x, int y, bool b){
    visited[x][y] = true;
    
    int ret = 1;
    
    for(int i = 0; i < 4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
            
        if(-1 < nx && nx < N && -1 < ny && ny < M && !visited[nx][ny] && S[nx][ny] == b) ret += dfs(nx, ny, b);
    }
    
    return ret;
}

int main()
{
    cin >> N >> M;
    cin.ignore();
    
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++) S[j][i] = (getchar() == 'W');
        getchar();
        
    }
    
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            if(!visited[j][i]){
                int t = dfs(j, i, S[j][i]);
            
                if(S[j][i]) res[0] += t * t;
                else res[1] += t * t;
            }
        }
    }
    
    cout << res[0] << ' ' << res[1];
    
    return 0;
}
