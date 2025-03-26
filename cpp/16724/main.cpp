#include <iostream>

using namespace std;

int N, M;

char m[1000][1000];

int g[1000][1000];

bool visited[1000][1000] = { false, };

int res = 0;

int find(int x, int y){
    if(!visited[x][y]){
        visited[x][y] = true;

        int nx = x, ny = y;

        if(m[x][y] == 'U') ny--;
        else if(m[x][y] == 'D') ny++;
        else if(m[x][y] == 'L') nx--;
        else nx++;

        return g[x][y] = find(nx, ny);
    } else {
        if(g[x][y] > 0) return g[x][y];
        else return ++res;
    }
}

int main()
{
    cin >> N >> M;

    for(int i = 0; i < N; i++){
        cin.ignore();
        for(int j = 0; j < M; j++) m[j][i] = getchar();
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(!visited[j][i]) find(j, i);
        }
    }

    cout << res;

    return 0;
}
