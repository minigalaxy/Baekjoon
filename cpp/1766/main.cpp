#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int N, M;

int A, B;

vector<int> order[32001];
int indegree[32001] = { 0, };
priority_queue<int, vector<int>, greater<int>> visit;

int main()
{
    cin >> N >> M;

    for(int i = 0; i < M; i++){
        cin >> A >> B;

        order[A].push_back(B);
        indegree[B]++;
    }

    for(int i = 1; i <= N; i++){
        if(indegree[i] == 0) visit.push(i);
    }

    while(!visit.empty()){
        for(int i = visit.size(); i > 0; i--){
            int v = visit.top();
            visit.pop();

            cout << v << ' ';

            for(int n: order[v]){
                if(--indegree[n] == 0) visit.push(n);
            }
        }
    }

    return 0;
}
