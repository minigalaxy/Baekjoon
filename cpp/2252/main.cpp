#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int N, M;

vector<int> order[32001];
int indegree[32001] = { 0, };
queue<int> visit;

int main()
{
    cin >> N >> M;

    for(int i = 0; i < M; i++){
        int A, B;
        cin >> A >> B;

        order[A].push_back(B);
        indegree[B]++;
    }

    for(int i = 1; i <= N; i++){
        if(indegree[i] == 0) visit.push(i);
    }

    while(!visit.empty()){
        int v = visit.front();
        visit.pop();

        cout << v << ' ';

        for(int n: order[v]){
            if(--indegree[n] == 0) visit.push(n);
        }
    }

    return 0;
}
