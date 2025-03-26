#include <iostream>
#include <queue>

#define MAX 2147483647

using namespace std;

int N;

int r[501], c[501];

int dp[501][501];

int main()
{
    cin >> N;

    for(int i = 1; i <= N; i++) cin >> r[i] >> c[i];

    fill(dp[0], dp[501], MAX);

    for(int i = 1; i <= N; i++) dp[i][i] = 0;

    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N - i + 1; j++){
            for(int k = j; k < j + i; k++){
                dp[j][j + i] = min(dp[j][j + i], dp[j][k] + dp[k + 1][j + i] + r[j] * c[k] * c[j + i]);
            }
        }
    }

    cout << dp[1][N];

    return 0;
}
