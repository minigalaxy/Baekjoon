#include <iostream>
#include <vector>
#include <queue>

#define MAX 100000000

using namespace std;

int T;

int N, K;

int D[1001];

vector<int> order[1001];
int indegree[1001];
int cost[1001];

int W;

int main()
{
    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> N >> K;

        fill(indegree + 1, indegree + N + 1, 0);
        fill(cost + 1, cost + N + 1, 0);

        for(int i = 1; i <= N; i++) order[i].clear();

        for(int i = 1; i <= N; i++) cin >> D[i];

        for(int i = 0; i < K; i++){
            int X, Y;
            cin >> X >> Y;

            order[X].push_back(Y);
            indegree[Y]++;
        }

        cin >> W;

        queue<int> visit;

        for(int i = 1; i <= N; i++){
            if(indegree[i] == 0){
                visit.push(i);
                cost[i] = D[i];
            }
        }

        while(!visit.empty()){
            int v = visit.front();
            visit.pop();

            for(int n: order[v]){
                indegree[n]--;
                cost[n] = max(cost[n], cost[v] + D[n]);

                if(indegree[n] == 0) visit.push(n);
            }
        }

        cout << cost[W] << '\n';
    }

    return 0;
}
