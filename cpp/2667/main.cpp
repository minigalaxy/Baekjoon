#include <iostream>
#include <queue>

using namespace std;

int N;

bool mat[25][25];

queue<pair<int, int>> visit;
bool visited[25][25] = { false, };

int cnt = 0;
priority_queue<int, vector<int>, greater<int>> house_cnt;

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int bfs(int x, int y){
    int t = 0;

    if(mat[x][y] && !visited[x][y]){
        visit.push(make_pair(x, y));
        visited[x][y] = true;

        cnt++;
    }

    while(!visit.empty()){
        pair<int, int> v = visit.front();
        visit.pop();

        t++;

        for(int i = 0; i < 4; i++){
            int nx = v.first + dx[i];
            int ny = v.second + dy[i];

            if(nx > -1 && nx < N && ny > -1 && ny < N && mat[nx][ny] && !visited[nx][ny]){
                visit.push(make_pair(nx, ny));
                visited[nx][ny] = true;
            }
        }
    }

    return t;
}

int main()
{
    cin >> N;

    cin.ignore();

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++) mat[j][i] = getchar() - '0';
        cin.ignore();
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            int tmp = bfs(i, j);

            if(tmp > 0) house_cnt.push(tmp);
        }
    }

    cout << cnt << '\n';

    while(!house_cnt.empty()){
        cout << house_cnt.top() << '\n';
        house_cnt.pop();
    }

    return 0;
}
