#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int T, M, N, K;

bool m[51][51];

queue<pair<int, int>> visit;

vector<int> res;

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

bool bfs(int x, int y){
    if(!m[x][y]) return false;

    visit.push(make_pair(x, y));
    m[x][y] = false;

    while(!visit.empty()){
        pair<int, int> t = visit.front();
        visit.pop();

        for(int i = 0; i < 4; i++){
            int nx = t.first + dx[i];
            int ny = t.second + dy[i];

            if(nx < M && nx > -1 && ny < N && ny > -1 &&m[nx][ny]){
                visit.push(make_pair(nx, ny));
                m[nx][ny] = false;
            }
        }
    }

    return true;
}

int main()
{
    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> M >> N >> K;

        vector<pair<int, int>> l;

        for(int j = 0; j < K; j++){
            int X, Y;
            cin >> X >> Y;

            m[X][Y] = true;
            l.push_back(make_pair(X, Y));
        }

        int r = 0;

        for(pair<int, int> t: l) if(bfs(t.first, t.second)) r++;

        res.push_back(r);
    }

    for(int t: res) cout << t << '\n';

    return 0;
}
