#include <iostream>
#include <vector>

using namespace std;

int N, R, Q;

vector<int> edge[100001];
int res[100001] = { 0, };

int solve(int cur){
    res[cur] = 1;

    for(int e: edge[cur]){
        if(res[e] == 0) res[cur] += solve(e);
    }

    return res[cur];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> N >> R >> Q;

    for(int i = 0; i < N - 1; i++){
        int U, V;
        cin >> U >> V;

        edge[U].push_back(V);
        edge[V].push_back(U);
    }

    solve(R);

    for(int i = 0; i < Q; i++){
        int U;
        cin >> U;

        cout << res[U] << '\n';
    }

    return 0;
}
