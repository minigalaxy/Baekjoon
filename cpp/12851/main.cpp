#include <iostream>
#include <queue>

using namespace std;

int N, K;

queue<int> visit;
int visited[100001] = { false, };

int time = 0, res = 0;

void bfs(){
    queue<int> tmp;

    visit.push(N);
    visited[N] = true;

    while(true){
        for(int i = visit.size(); i > 0; i--){
            int v = visit.front();
            visit.pop();

            if(v == K) res++;

            if(v - 1 >= 0 && !visited[v - 1]){
                visit.push(v - 1);
                tmp.push(v - 1);
            }
            if(v + 1 <= 100000 && !visited[v + 1]){
                visit.push(v + 1);
                tmp.push(v + 1);
            }
            if(v * 2 <= 100000 && !visited[v * 2]){
                visit.push(v * 2);
                tmp.push(v * 2);
            }
        }

        if(res > 0){
            cout << time << '\n' << res;
            return;
        }

        while(!tmp.empty()){
            visited[tmp.front()] = true;
            tmp.pop();
        }

        time++;
    }
}

int main()
{
    cin >> N >> K;

    bfs();

    return 0;
}
