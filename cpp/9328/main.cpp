#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int T;

int h, w;

char building[102][102];

int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

bool keys[27];

queue<pair<int, int>> visit;
bool visited[102][102];

int main()
{
    cin >> T;

    for(int i = 0; i < T; i++){
        int res = 0;

        fill(building[0], building[102], '.');
        fill(keys, keys + 26, false);

        cin >> h >> w;

        for(int j = 1; j <= h; j++){
            getchar();
            for(int k = 1; k <= w; k++) building[k][j] = getchar();
        }

        string t;
        cin >> t;

        for(int j = 0; j < t.size(); j++){
            if(t[j] - 'a' < 0) break;

            keys[t[j] - 'a'] = true;
        }

        bool flag = true;

        while(flag){
            flag = false;

            fill(visited[0], visited[102], false);

            visit.push({ 0, 0 });
            visited[0][0] = true;

            while(!visit.empty()){
                pair<int, int> pos = visit.front();
                visit.pop();

                for(int j = 0; j < 4; j++){
                    int x = pos.first + dx[j];
                    int y = pos.second + dy[j];

                    if(x > -1 && x < w + 2 && y > -1 && y < h + 2 && building[x][y] != '*' && !visited[x][y]){

                        if(building[x][y] == '$'){
                            building[x][y] = '.';
                            res++;
                        } else if(building[x][y] >= 'a' && building[x][y] <= 'z'){
                            keys[building[x][y] - 'a'] = true;
                            building[x][y] = '.';
                            flag = true;
                        } else if(building[x][y] >= 'A' && building[x][y] <= 'Z'){
                            if(keys[building[x][y] - 'A']) building[x][y] = '.';
                            else continue;
                        }

                        visit.push({ x, y });
                        visited[x][y] = true;
                    }
                }
            }
        }

        cout << res << '\n';
    }

    return 0;
}

// fastio랑 getchar 같이 써놓고 3시간 동안 왜 틀렸지하면서 뻘짓한거... 앞으론 fastio 제대로 숙지하고 사용할 것!!!!!
