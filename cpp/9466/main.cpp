#include <iostream>

using namespace std;

int T;

int n;

int parent[100001];

int team[100001] = { 0, };
bool visited[100001];

int res;

void find_root(int n){
    if(visited[n]){
        if(team[n] == 0){
            team[n] = 1;

            find_root(parent[n]);
        }
    } else {
        visited[n] = true;

        find_root(parent[n]);

        if(team[n] == 0) team[n] = -1;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> T;

    for(int i = 0; i < T; i++){
        res = 0;

        cin >> n;

        fill(team, team + n + 1, 0);
        fill(visited, visited + n + 1, false);

        for(int j = 1; j <= n; j++) cin >> parent[j];

        for(int j = 1; j <= n; j++){
            if(!visited[j]) find_root(j);
        }

        for(int j = 1; j <= n; j++) if(team[j] == -1) res++;

        cout << res << '\n';
    }

    return 0;
}
