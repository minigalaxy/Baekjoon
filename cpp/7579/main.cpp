#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int N, M;

int m[101], c[101], s = 0;

int dp[101][10001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> N >> M;

    for(int i = 1; i <= N; i++) cin >> m[i];
    for(int i = 1; i <= N; i++){
        cin >> c[i];

        s += c[i];
    }

    for(int i = 1; i <= N; i++){
        for(int j = 0; j <= s; j++){
            if(j - c[i] >= 0) dp[i][j] = max(dp[i][j], dp[i - 1][j - c[i]] + m[i]);
            dp[i][j] = max(dp[i][j], dp[i - 1][j]);
        }
    }

    for(int i = 0; i <= s; i++){
        if(dp[N][i] >= M){
            cout << i;
            break;
        }
    }

    return 0;
}
