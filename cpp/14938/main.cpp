#include <iostream>

using namespace std;

int n, m, r;

int t[100];

int a, b, l;

int cost[100][100];

int res = 0;

int main()
{
    cin >> n >> m >> r;

    for(int i = 1; i <= n; i++) cin >> t[i];

    fill(cost[0], cost[100], 1500);

    for(int i = 1; i <= n; i++) cost[i][i] = 0;

    for(int i = 0; i < r; i++){
        cin >> a >> b >> l;

        cost[a][b] = l;
        cost[b][a] = l;
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            for(int k = 1; k <= n; k++) cost[j][k] = min(cost[j][k], cost[j][i] + cost[i][k]);
        }
    }

    for(int i = 1, sum; i <= n; i++){
        sum = 0;

        for(int j = 1; j <= n; j++){
            if(cost[i][j] <= m) sum += t[j];
        }

        res = max(res, sum);
    }

    cout << res;

    return 0;
}
