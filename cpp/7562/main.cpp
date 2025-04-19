#include <iostream>
#include <queue>
#include <tuple>

using namespace std;

int T;

int l;

queue<pair<int, int>> visit;

bool visited[300][300];

int dx[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };
int dy[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };

int bfs(int sx, int sy, int tx, int ty){
    int res = 0;
    
    while(!visit.empty()) visit.pop();
    fill(visited[0], visited[300], false);
    
    visit.push({ sx, sy });
    visited[sx][sy] = true;
    
    while(!visit.empty()){
        for(int i = visit.size(); i > 0; i--){
            int x, y;
            tie(x, y) = visit.front();
            visit.pop();
            
            if(x == tx && y == ty) return res;
            
            for(int j = 0; j < 8; j++){
                int nx = x + dx[j];
                int ny = y + dy[j];
                
                if(nx > -1 && nx < l && ny > -1 && ny < l && !visited[nx][ny]){
                    visit.push({ nx, ny });
                    visited[nx][ny] = true;
                }
            }
        }
        
        res++;
    }
}

int main()
{
    cin >> T;
    
    for(int i = 0; i < T; i++){
        cin >> l;
        
        int sx, sy, tx, ty;
        
        cin >> sx >> sy >> tx >> ty;
    
        cout << bfs(sx, sy, tx, ty) << '\n';
    }
    
    return 0;
}
