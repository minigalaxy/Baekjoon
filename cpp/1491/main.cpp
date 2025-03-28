#include <iostream>

using namespace std;

int N, M;

bool visited[5000][5000] = { false, };

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main()
{
    cin >> N >> M;
    
    int x = 0, y = 0, d = 0, n = 1;
    
    visited[0][0] = true;
    
    while(true){
        int nx = x + dx[d];
        int ny = y + dy[d];
        
        if(nx > -1 && nx < N && ny > -1 && ny < M && !visited[nx][ny]){
            x = nx;
            y = ny;
            visited[x][y] = true;
            n++;
        } else d = (d + 1) % 4;
        
        if(n == M * N) break;
    }
    
    cout << x << ' ' << y;
    
    return 0;
}
