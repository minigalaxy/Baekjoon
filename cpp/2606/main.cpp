#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int N, M;

vector<int> networks[101];
queue<int> visit;
bool visited[101] = { false, };

int res = 0;

void bfs(){
    while(!visit.empty()){
        int v = visit.front();
        visit.pop();

        for(int i = 0; i < networks[v].size(); i++){
            int n = networks[v][i];

            if(!visited[n]){
                visit.push(n);
                visited[n] = true;
                res++;
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

        networks[a].push_back(b);
        networks[b].push_back(a);
    }

    visit.push(1);
    visited[1] = true;

    bfs();

    cout << res;

    return 0;
}
