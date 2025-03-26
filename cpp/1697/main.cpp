#include <iostream>
#include <queue>

using namespace std;

int N, K;

queue<int> visit;
bool visited[100001] = { false, };

int bfs(){
    int t = 0;

    visit.push(N);
    visited[N] = true;

    while(!visit.empty()){
        for(int i = visit.size(); i > 0; i--){
            int v = visit.front();
            visit.pop();

            if(v == K) return t;

            if(v - 1 > -1 && !visited[v - 1]){
                visit.push(v - 1);
                visited[v - 1] = true;
            }
            if(v + 1 < 100001 && !visited[v + 1]){
                visit.push(v + 1);
                visited[v + 1] = true;
            }
            if(v * 2 < 100001 && !visited[v * 2]){
                visit.push(v * 2);
                visited[v * 2] = true;
            }
        }

        t++;
    }
}

int main()
{
    cin >> N >> K;

    cout << bfs();

    return 0;
}
