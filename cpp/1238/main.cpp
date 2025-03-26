#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int N, M, X;

int S, E, T;

vector<pair<int, int>> road[1001];

int cost[1001];

priority_queue<pair<int, int>> visit;

int res[1001];

int main()
{
    cin >> N >> M >> X;

    for(int i = 0; i < M; i++){
        cin >> S >> E >> T;

        road[S].push_back(make_pair(E, T));
    }

    for(int start = 1; start <= N; start++){
        fill(cost + 1, cost + 1001, 1000000);

        cost[start] = 0;
        visit.push(make_pair(0, start));

        while(!visit.empty()){
            pair<int, int> v = visit.top();
            visit.pop();

            if(v.second == X){
                res[start] = -v.first;

                while(!visit.empty()) visit.pop();
                break;
            }

            if(-v.first > cost[v.second]) continue;

            for(pair<int, int> n: road[v.second]){
                if(cost[v.second] + n.second < cost[n.first]){
                    cost[n.first] = cost[v.second] + n.second;
                    visit.push(make_pair(-cost[n.first], n.first));
                }
            }
        }
    }

    fill(cost + 1, cost + 1001, 1000000);

    cost[X] = 0;
    visit.push(make_pair(0, X));

    while(!visit.empty()){
        pair<int, int> v = visit.top();
        visit.pop();

        if(-v.first > cost[v.second]) continue;

        for(pair<int, int> n: road[v.second]){
            if(cost[v.second] + n.second < cost[n.first]){
                cost[n.first] = cost[v.second] + n.second;
                visit.push(make_pair(-cost[n.first], n.first));
            }
        }
    }

    for(int i = 1; i <= N; i++) res[i] += cost[i];

    cout << *max_element(res + 1, res + N + 1);

    return 0;
}
