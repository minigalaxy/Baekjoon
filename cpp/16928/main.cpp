#include <iostream>
#include <queue>

using namespace std;

int N, M;

int ladder[101] = { 0, }, snake[101] = { 0, };

queue<int> visit;
bool visited[101] = { false, };

int bfs(){
    int t = 0;

    visit.push(1);
    visited[1] = true;

    while(!visit.empty()){
        for(int i = visit.size(); i > 0; i--){
            int v = visit.front();
            visit.pop();

            if(v == 100) return t;

            if(ladder[v] > 0) {
                v = ladder[v];
                visited[v] = true;
            } else if(snake[v] > 0){
                v = snake[v];
                visited[v] = true;
            }

            for(int j = 1; j <= 6; j++){
                int n = v + j;

                if(n <= 100 && !visited[n]){
                    visit.push(n);
                    visited[n] = true;
                }
            }
        }

        t++;
    }
}

int main()
{
    cin >> N >> M;

    for(int i = 0; i < N; i++){
        int x, y;
        cin >> x >> y;

        ladder[x] = y;
    }

    for(int i = 0; i < M; i++){
        int u, v;
        cin >> u >> v;

        snake[u] = v;
    }

    cout << bfs();

    return 0;
}
