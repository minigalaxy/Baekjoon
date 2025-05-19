#include <iostream>
#include <string>
#include <queue>
#include <set>

using namespace std;

int R, C;

string lake[1500];

int group_num = 0;
int group[1500][1500] = { 0, };
int swan_group[2];
int swan_t = 0;

int parent[1125001];

int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

int res = 0;

queue<pair<int, int>> visit;
bool visited[1500][1500] = { false, };

queue<pair<pair<int, int>, int>> outline;

int current_num = 0;

int find_root(int node){
    return ((node == parent[node]) ? node : parent[node] = find_root(parent[node]));
}

void union_root(int a, int b){
    int ra = find_root(a);
    int rb = find_root(b);

    if(ra == rb) return;

    parent[rb] = ra;
}

void init(){
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            if(lake[i][j] != 'X' && !visited[i][j]){
                group_num++;

                visit.push({ i, j });
                visited[i][j] = true;

                while(!visit.empty()){
                    pair<int, int> v = visit.front();
                    visit.pop();

                    if(lake[v.first][v.second] == 'L') swan_group[swan_t++] = group_num;

                    group[v.first][v.second] = group_num;

                    for(int d = 0; d < 4; d++){
                        int nx = v.first + dx[d];
                        int ny = v.second + dy[d];

                        if(nx > -1 && nx < R && ny > -1 && ny < C && !visited[nx][ny]){
                            if(lake[nx][ny] == 'X') outline.push({ { nx, ny }, group_num });
                            else visit.push({ nx, ny });

                            visited[nx][ny] = true;
                        }
                    }
                }
            }
        }
    }
}

void melt(){
    for(int i = outline.size(); i > 0; i--){
        pair<pair<int, int>, int> v = outline.front();
        outline.pop();

        if(lake[v.first.first][v.first.second] == 'X'){
            lake[v.first.first][v.first.second] = '.';
            group[v.first.first][v.first.second] = v.second;
        }

        for(int d = 0; d < 4; d++){
            int nx = v.first.first + dx[d];
            int ny = v.first.second + dy[d];

            if(nx > -1 && nx < R && ny > -1 && ny < C){
                if(lake[nx][ny] == 'X'){
                    if(!visited[nx][ny]){
                        outline.push({ { nx, ny }, v.second });
                        visited[nx][ny] = true;
                    }
                } else union_root(group[nx][ny], v.second);
            }
        }
    }
}

bool chk(){
    return (find_root(swan_group[0]) == find_root(swan_group[1]));
}

int main()
{
    cin >> R >> C;

    for(int i = 0; i < R; i++) cin >> lake[i];

    init();

    for(int i = 1; i <= group_num; i++) parent[i] = i;

    for(; !chk(); res++) melt();

    cout << res;

    return 0;
}
