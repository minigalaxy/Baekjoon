#include <iostream>
#include <deque>

using namespace std;

int N, K;

deque<int> visit;
bool visited[100001] = { false, };

int bfs(){
    int t = 0;

    visit.push_back(N);
    visited[N] = true;

    while(!visit.empty()){
        for(int i = visit.size(); i > 0; i--){
            int v = visit.front();
            visit.pop_front();

            if(v == K) return t;

            if(v * 2 < 100001 && !visited[v * 2]){
                visit.push_front(v * 2);
                visited[v * 2] = true;
                i++;
            }

            if(v - 1 > -1 && !visited[v - 1]){
                visit.push_back(v - 1);
                visited[v - 1] = true;
            }

            if(v + 1 <= K && !visited[v + 1]){
                visit.push_back(v + 1);
                visited[v + 1] = true;
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
