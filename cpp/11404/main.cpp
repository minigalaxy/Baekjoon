#include <iostream>

using namespace std;

int n, m;

int a, b, c;

int cost[101][101];

int main()
{
    cin >> n >> m;

    fill(cost[0], cost[101], 10000001);

    for(int i = 1; i <= n; i++) cost[i][i] = 0;

    for(int i = 0; i < m; i++){
        cin >> a >> b >> c;

        cost[a][b] = min(cost[a][b], c);
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            for(int k = 1; k <= n; k++){
                cost[j][k] = min(cost[j][k], cost[j][i] + cost[i][k]);
            }
        }
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++) cout << ((cost[i][j] > 10000000) ? 0 : cost[i][j]) << ' ';
        cout << '\n';
    }

    return 0;
}
