#include <iostream>

using namespace std;

int N, M;

bool visited[300][300] = { false, }, visit[300][300];

void dfs(int x, int y){
    visited[x][y] = true;

    if(x + 1 < M && visit[x + 1][y] && !visited[x + 1][y]) dfs(x + 1, y);
    if(y + 1 < N && visit[x][y + 1] && !visited[x][y + 1]) dfs(x, y + 1);
}

int main()
{
    cin >> N >> M;

    for(int i = 0; i < M; i++)
        for(int j = 0; j < N; j++) cin >> visit[i][j];

    dfs(0, 0);

    cout << ((visited[M - 1][N - 1]) ? "Yes" : "No");

    return 0;
}
