#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int V, E;

int K;

vector<pair<int, int>> edge[20001];

priority_queue<pair<int, int>> visit;
int memory[20001];

void dijkstra(){
    fill(memory, memory + 20001, 3000000);
    memory[K] = 0;

    visit.push(make_pair(0, K));

    while(!visit.empty()){
        pair<int, int> v = visit.top();
        visit.pop();

        if(-v.first > memory[v.second]) continue;

        for(pair<int, int> n: edge[v.second]){
            if(memory[n.second] > memory[v.second] + n.first){
                memory[n.second] = memory[v.second] + n.first;
                visit.push(make_pair(-memory[n.second], n.second));
            }
        }
    }
}

int main()
{
    cin >> V >> E;

    cin >> K;

    for(int i = 0; i < E; i++){
        int u, v, w;
        cin >> u >> v >> w;

        edge[u].push_back(make_pair(w, v));
    }

    dijkstra();

    for(int i = 1; i <= V; i++){
        if(memory[i] < 3000000) cout << memory[i] << '\n';
        else cout << "INF\n";
    }

    return 0;
}
