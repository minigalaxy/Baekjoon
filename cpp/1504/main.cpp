#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int N, E;

int v[2];

vector<pair<int, int>> edge[801];

int memory[801] = { 0, };

priority_queue<pair<int, int>> visit;

int dijkstra(int s, int e){
    fill(memory, memory + 801, 200000000);
    memory[s] = 0;

    visit.push(make_pair(0, s));

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

    return memory[e];
}

int main()
{
    cin >> N >> E;

    for(int i = 0; i < E; i++){
        int a, b, c;
        cin >> a >> b >> c;

        edge[a].push_back(make_pair(c, b));
        edge[b].push_back(make_pair(c, a));
    }

    cin >> v[0] >> v[1];

    int t1 = dijkstra(1, v[0]), t2 = dijkstra(1, v[1]), t3 = dijkstra(v[0], N), t4 = dijkstra(v[1], N), t5 = dijkstra(v[0], v[1]);

    cout << ((min(t1 + t5 + t4, t2 + t5 + t3) < 200000000) ? min(t1 + t5 + t4, t2 + t5 + t3) : -1);

    return 0;
}
