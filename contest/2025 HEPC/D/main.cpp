#include <iostream>
#include <queue>

using namespace std;

int N, M;

bool board[1000][1000][7] = { false, };

int num[1000][1000];

queue<pair<pair<int, int>, int>> visit;
bool visited[1000][1000][7] = { false, };

int group_num = 0;

bool num_lights[10][7] = {
{ true, true, true, true, true, true, false },
{ false, true, true, false, false, false, false },
{ true, true, false, true, true, false ,true },
{ true, true, true, true, false, false, true },
{ false, true, true, false, false, true, true },
{ true, false, true, true, false, true, true },
{ true, false, true, true, true, true, true },
{ true, true, true, false, false, false, false },
{ true, true, true, true, true, true, true },
{ true, true, true, true, false, true, true }
};

int adj[6][3] = {
{ 0, -1, 3 },
{ 1, 0, 5 },
{ 1, 0, 4 },
{ 0, 1, 0 },
{ -1, 0, 2 },
{ -1, 0, 1 }
};

void grouping(int x, int y, int k){
    visit.push({ { x, y }, k });
    visited[x][y][k] = true;
    
    while(!visit.empty()){
        pair<pair<int, int>, int> v = visit.front();
        visit.pop();
        
        for(int i = 0; i < 7; i++){
            if(!visited[v.first.first][v.first.second][i] && board[v.first.first][v.first.second][i]){
                visited[v.first.first][v.first.second][i] = true;
                visit.push({ v.first, i });
            }
        }
        
        if(v.second != 6){
            int nx = v.first.first + adj[v.second][0];
            int ny = v.first.second + adj[v.second][1];
            
            if(nx > -1 && nx < M && ny > -1 && ny < N && !visited[nx][ny][adj[v.second][2]] && board[nx][ny][adj[v.second][2]]){
                visited[nx][ny][adj[v.second][2]] = true;
                visit.push({ { nx, ny }, adj[v.second][2] });
            }
        }
        
    }
}

int main()
{
    cin >> N >> M;
    cin.ignore();
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++) num[j][i] = getchar() - '0';
        getchar();
    }
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            for(int k = 0; k < 7; k++){
                board[j][i][k] = num_lights[num[j][i]][k];
            }
        }
    }
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            for(int k = 0; k < 7; k++){
                if(!visited[j][i][k] && board[j][i][k]){
                    grouping(j, i, k);
                    
                    group_num++;
                }
            }
        }
    }
    
    if(group_num == 1) cout << "YES";
    else cout << "NO";
    
    return 0;
}
