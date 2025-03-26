#include <iostream>
#include <vector>
#include <tuple>

using namespace std;

int TC;

int N, M, W;

vector<tuple<int, int, int>> road;

int S, E, T;

int dist[501];

bool bellman_ford(){
    fill(dist, dist + 501, 25000000);

    dist[1] = 0;

    for(int i = 0; i < N; i++){
        for(tuple<int, int, int> t: road){
            int s, e, c;
            tie(s, e, c) = t;

            if(dist[s] + c < dist[e]){
                dist[e] = dist[s] + c;

                if(i == N - 1) return true;
            }
        }
    }

    return false;
}

int main()
{
    cin >> TC;

    for(int i = 0; i < TC; i++){
        road.clear();

        cin >> N >> M >> W;

        for(int j = 0; j < M; j++){
            cin >> S >> E >> T;

            road.push_back(make_tuple(S, E, T));
            road.push_back(make_tuple(E, S, T));
        }

        for(int j = 0; j < W; j++){
            cin >> S >> E >> T;

            road.push_back(make_tuple(S, E, -T));
        }

        cout << ((bellman_ford()) ? "YES" : "NO") << '\n';
    }

    return 0;
}
