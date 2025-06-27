#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int N, M;

int m[500][500];

int X, Y;

vector<pair<int, int>> op;

queue<pair<int, int>> visit;

int dx[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };
int dy[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };

int main()
{
    fill(m[0], m[500], 99999);

    cin >> N >> M;

    cin >> X >> Y;

    X--;
    Y--;

    for(int i = 0; i < M; i++){
        int A, B;
        cin >> A >> B;

        op.push_back({ A, B });
    }

    m[X][Y] = 0;

    visit.push({ X, Y });

    while(!visit.empty()){
        pair<int, int> v = visit.front();
        visit.pop();

        for(int i = 0; i < 8; i++){
            int nx = v.first + dx[i];
            int ny = v.second + dy[i];

            if(nx < N && nx > -1 && ny < N && ny > -1 && m[v.first][v.second] + 1 < m[nx][ny]){
                m[nx][ny] = m[v.first][v.second] + 1;
                visit.push({ nx, ny });
            }
        }
    }

    for(pair<int, int> p: op){
        cout << m[p.first - 1][p.second - 1] << ' ';
    }

    return 0;
}
