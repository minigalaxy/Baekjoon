#include <iostream>
#include <vector>

using namespace std;

int N;

vector<int> edge[100001];

int parent[100001] = { 0, 1, };

void solve(int n){
    for(int child: edge[n]){
        if(child != parent[n]){
            parent[child] = n;
            solve(child);
        }
    }
}

int main()
{
    cin >> N;

    for(int i = 0; i < N - 1; i++){
        int a, b;
        cin >> a >> b;

        edge[a].push_back(b);
        edge[b].push_back(a);
    }

    solve(1);

    for(int i = 2; i <= N; i++) cout << parent[i] << '\n';

    return 0;
}
