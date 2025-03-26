#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int N, M;

vector<int> adj_list[1001];

queue<int> visit;
bool visited[1001];

int res = 0;

void bfs(int start){
    if(visited[start]) return;

    res++;

    visit.push(start);
    visited[start] = true;

    while(!visit.empty()){
        int t = visit.front();
        visit.pop();

        for(int v: adj_list[t]){
            if(!visited[v]){
                visit.push(v);
                visited[v] = true;
            }
        }
    }
}

int main()
{
    cin >> N >> M;

    for(int i = 0; i < M; i++){
        int a, b;
        cin >> a >> b;

        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    for(int i = 1; i <= N; i++) bfs(i);

    cout << res;

    return 0;
}
