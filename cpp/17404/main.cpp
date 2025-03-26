#include <iostream>

#define MAX 1000000

using namespace std;

int N;

int cost[1000][3];

int dp[1000][3];

int res = MAX;

int main()
{
    cin >> N;

    for(int i = 0; i < N; i++) cin >> cost[i][0] >> cost[i][1] >> cost[i][2];

    for(int i = 0; i < 3; i++){
        fill(dp[0], dp[N], MAX);

        dp[0][i] = cost[0][i];

        for(int j = 1; j < N; j++){
            for(int k = 0; k < 3; k++){
                for(int l = 0; l < 3; l++){
                    if(k != l) dp[j][l] = min(dp[j][l], dp[j - 1][k] + cost[j][l]);
                }
            }
        }

        for(int j = 0; j < 3; j++) if(j != i) res = min(res, dp[N - 1][j]);
    }

    cout << res;

    return 0;
}
