#include <iostream>
#include <string>
#include <queue>
#include <set>

using namespace std;

int R, C;

string lake[1500];

int group_num = 0;
int group[1500][1500] = { 0, };
set<int> swan_group;

int parent[1125001];

int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

int res = 0;

queue<pair<int, int>> visit;
bool visited[1500][1500] = { false, };

int current_num = 0;

void grouping(){
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            if(lake[i][j] != 'X' && !visited[i][j]){
                visit.push({ i, j });
                visited[i][j] = true;
                
                while(!visit.empty()){
                    pair<int, int> v = visit.front();
                    visit.pop();
                    
                    if(lake[v.first][v.second] == 'L') swan_group.insert(group_num);
                    
                    group[v.first][v.second] = group_num;
                    
                    for(int d = 0; d < 4; d++){
                        int nx = v.first + dx[d];
                        int ny = v.second + dy[d];
                        
                        if(nx > -1 && nx < R && ny > -1 && ny < C && lake[nx][ny] != 'X' && !visited[nx][ny]){
                            visit.push({ nx, ny });
                            visited[nx][ny] = true;
                        }
                    }
                }
                
                group_num++;
            }
        }
    }
}

void melt(){
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            if(lake[i][j] != 'X' && !visited[i][j]){
                visit.push({ i, j });
                
                while(!visit.empty()){
                    pair<int, int> v = visit.front();
                    visit.pop();
                    
                    for(int d = 0; d < 4; d++){
                        int nx = v.first + dx[d];
                        int ny = v.second + dy[d];
                        
                        if(nx > -1 && nx < R && ny > -1 && ny < C && !visited[nx][ny]){
                            if(lake[nx][ny] != 'X'){
                                visit.push({ nx, ny });
                                visited[nx][ny] = true;
                            } else {
                                lake[nx][ny] = '.';
                                visited[nx][ny] = true;
                                group[nx][ny] = group[v.first][v.second];
                            }
                        }
                    }
                }
            }
        }
    }
}

int find_root(int node){
    return ((node == parent[node]) ? node : parent[node] = find_root(parent[node]));
}

void union_root(int a, int b){
    int ra = find_root(a);
    int rb = find_root(b);
    
    parent[rb] = ra;
}

void chk(){
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            if(lake[i][j] != 'X' && !visited[i][j] && swan_group.find(group[i][j]) != swan_group.end()){
                int g = group[i][j];
                visit.push({ i, j });
                
                while(!visit.empty()){
                    pair<int, int> v = visit.front();
                    visit.pop();
                    
                    for(int d = 0; d < 4; d++){
                        int nx = v.first + dx[d];
                        int ny = v.second + dy[d];
                        
                        if(nx > -1 && nx < R && ny > -1 && ny < C && lake[nx][ny] != 'X' && !visited[nx][ny]){
                            if(group[nx][ny] > -1 && find_root(g) != find_root(group[nx][ny])){
                                union_root(group[v.first][v.second], group[nx][ny]);
                                if(swan_group.find(group[nx][ny]) != swan_group.end()) current_num++;
                            }
                                
                            visit.push({ nx, ny });
                            visited[nx][ny] = true;
                        }
                    }
                }
            }
        }
    }
}

int main()
{
    cin >> R >> C;
    
    for(int i = 0; i < R; i++) cin >> lake[i];
    
    fill(group[0], group[1500], -1);
    
    grouping();
    
    fill(visited[0], visited[1500], false);
    
    for(int i = 0; i < group_num; i++) parent[i] = i;
    
    for(; current_num + 1 < swan_group.size(); res++){
        melt();
        
        fill(visited[0], visited[1500], false);
        
        chk();
        
        fill(visited[0], visited[1500], false);
    }
    
    cout << res;
    
    return 0;
}
