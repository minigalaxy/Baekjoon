#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n, m;

vector<pair<int, int>> bus[1001];
vector<pair<int, int>> bus2[1001];

priority_queue<pair<long long, int>> visit;
long long dist[1001];

int cnt = 0, path[1000];

int dpt, dst;

void dijkstra(){
    fill(dist, dist + 1001, 10000000000);

    dist[dpt] = 0;
    visit.push(make_pair(0, dpt));

    while(!visit.empty()){
        pair<long long, int> v = visit.top();
        visit.pop();

        if(-v.first > dist[v.second]) continue;

        for(pair<int, int> b: bus[v.second]){
            if(dist[v.second] + b.second < dist[b.first]){
                dist[b.first] = dist[v.second] + b.second;
                visit.push(make_pair(-dist[b.first], b.first));
            }
        }
    }

    int cur = dst;

    path[cnt++] = cur;

    while(cur != dpt){
        for(pair<int, int> b: bus2[cur]){
            if(dist[b.first] + b.second == dist[cur]){
                cur = b.first;
                break;
            }
        }

        path[cnt++] = cur;
    }

    cout << dist[dst] << '\n' << cnt << '\n';

    for(int i = cnt - 1; i > -1; i--) cout << path[i] << ' ';
}

int main()
{
    cin >> n >> m;

    for(int i = 0; i < m; i++){
        int s, e, c;
        cin >> s >> e >> c;

        bus[s].push_back(make_pair(e, c));
        bus2[e].push_back(make_pair(s, c));
    }

    cin >> dpt >> dst;

    dijkstra();

    return 0;
}
