#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int N;

int r;

int s = 2;
int t = 0;
int m[20][20];
int v[20][20];
queue<pair<int, int>> n;

int dx[4] = { 0, -1, 1, 0 };
int dy[4] = { -1, 0, 0, 1 };

void bfs(){
    int d = 0;

    while(!n.empty()){
        int fx = 20;
        int fy = 20;

        for(int i = n.size() - 1; i > -1; i--){
            int x = n.front().first;
            int y = n.front().second;

            n.pop();

            if(m[x][y] > s) continue;

            if(m[x][y] > 0 && m[x][y] < s){
                if(y < fy){
                    fx = x;
                    fy = y;
                } else if(y == fy && x < fx){
                    fx = x;
                    fy = y;

                    continue;
                }
            }

            if(fx == 20){
                for(int j = 0; j < 4; j++){
                    int tx = x + dx[j];
                    int ty = y + dy[j];

                    if(tx > -1 && tx < N && ty > -1 && ty < N && !v[tx][ty]){
                        n.push(make_pair(tx, ty));
                        v[tx][ty] = 1;
                    }
                }
            }
        }

        if(fx < 20){
            r += d;
            d = -1;

            fill(v[0], v[20], 0);

            m[fx][fy] = 0;
            v[fx][fy] = 1;
            t++;

            if(t == s){
                t = 0;
                s++;
            }

            n = queue<pair<int, int>>();
            n.push(make_pair(fx, fy));
        }

        d++;
    }
}

int main()
{
    int x, y;

    cin >> N;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            int t;
            cin >> t;

            if(t == 9){
                x = j;
                y = i;

                t = 0;
            }

            m[j][i] = t;
        }
    }

    n.push(make_pair(x, y));
    v[x][y] = 1;
    bfs();

    cout << r;

    return 0;
}
