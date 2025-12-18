#include <iostream>
#include <queue>

using namespace std;

int R, C;

char m[100][100];

queue<pair<int, int>> Q;
bool visited[100][100] = { false, };

int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

int main()
{
    cin >> R >> C;
    cin.ignore();
    
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            m[i][j] = getchar();
            
            if(m[i][j] == 'B'){
                Q.push({ i, j });
                visited[i][j] = true;
            }
        }
        getchar();
    }
    
    int res = 0;
    
    while(!Q.empty()){
        for(int i = Q.size(); i > 0; i--){
            pair<int, int> p = Q.front();
            Q.pop();
            
            if(m[p.first][p.second] == 'C'){
                cout << res;
                
                return 0;
            }
            
            for(int j = 0; j < 4; j++){
                int nx = p.first + dx[j];
                int ny = p.second + dy[j];
                
                if(-1 < nx && nx < R && -1 < ny && ny < C && !visited[nx][ny] && m[nx][ny] != '*'){
                    Q.push({ nx, ny });
                    visited[nx][ny] = true;
                }
            }
        }
    
        res++;
    }
    
    return 0;
}
