#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int N, M;
int A, B;

vector<pair<int, int>> bus[1001];

priority_queue<pair<long long, int>> visit;
long long dist[1001] = { 0, };

void dijkstra(){
    visit.push(make_pair(0, A));
    dist[A] = 0;

    while(!visit.empty()){
        long long cost = -visit.top().first;
        int cur = visit.top().second;

        visit.pop();

        if(dist[cur] < cost) continue;

        for(pair<int, int> b: bus[cur]){
            if(dist[cur] + b.second < dist[b.first]){
                dist[b.first] = dist[cur] + b.second;
                visit.push(make_pair(-dist[b.first], b.first));
            }
        }
    }
}

int main()
{
    cin >> N >> M;

    for(int i = 0; i < M; i++){
        int s, e, c;
        cin >> s >> e >> c;

        bus[s].push_back(make_pair(e, c));
    }

    cin >> A >> B;

    fill(dist, dist + N + 1, 1000000000);

    dijkstra();

    cout << dist[B];

    return 0;
}
