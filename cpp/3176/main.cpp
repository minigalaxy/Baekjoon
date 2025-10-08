#include <iostream>
#include <vector>

using namespace std;

int N;

vector<pair<int, int>> edge[100'001];

int depths[100'001];
int parents[100'001][17];

int mn[100'001][17], mx[100'001][17];

int K;

void init(int cur, int parent, int depth){
    depths[cur] = depth;

    for(int i = 1; i < 17; i++){
        parents[cur][i] = parents[parents[cur][i - 1]][i - 1];
        mn[cur][i] = min(mn[cur][i - 1], mn[parents[cur][i - 1]][i - 1]);
        mx[cur][i] = max(mx[cur][i - 1], mx[parents[cur][i - 1]][i - 1]);
    }

    for(pair<int, int> p: edge[cur]){
        if(p.first != parent){
            mn[p.first][0] = p.second;
            mx[p.first][0] = p.second;
            parents[p.first][0] = cur;

            init(p.first, cur, depth + 1);
        }
    }
}

int get_lca(int a, int b){
    for(int i = 16; i >= 0; i--){
        if(depths[a] - depths[b] >= (1 << i)) a = parents[a][i];
    }

    if(a == b) return a;

    for(int i = 16; i >= 0; i--){
        if(parents[a][i] != parents[b][i]){
            a = parents[a][i];
            b = parents[b][i];
        }
    }

    return parents[a][0];
}

int get_min(int a, int lca){
    int ret = 1'000'000;

    for(int i = 16; i >= 0; i--){
        if(depths[a] - depths[lca] >= (1 << i)){
            ret = min(ret, mn[a][i]);
            a = parents[a][i];
        }
    }

    return ret;
}
int get_max(int a, int lca){
    int ret = 0;

    for(int i = 16; i >= 0; i--){
        if(depths[a] - depths[lca] >= (1 << i)){
            ret = max(ret, mx[a][i]);
            a = parents[a][i];
        }
    }

    return ret;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;

    fill(mn[0], mn[100'001], 1'000'000);
    fill(mx[0], mx[100'001], 0);

    for(int i = 0; i < N - 1; i++){
        int A, B, C;
        cin >> A >> B >> C;

        edge[A].push_back({ B, C });
        edge[B].push_back({ A, C });
    }

    init(1, 0, 0);

    cin >> K;

    for(int i = 0; i < K; i++){
        int D, E;
        cin >> D >> E;

        int a, b;

        if(depths[D] > depths[E]) a = D, b = E;
        else a = E, b = D;

        int lca = get_lca(a, b);

        cout << min(get_min(a, lca), get_min(b, lca)) << ' ' << max(get_max(a, lca), get_max(b, lca)) << '\n';
    }

    return 0;
}
