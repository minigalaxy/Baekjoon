#include <iostream>
#include <vector>

using namespace std;

int T, n;

int dp[12] = { 0, 1, 2, 4, };

vector<int> res;

int main()
{
    cin >> T;

    for(int i = 0; i < T; i++){
        int t = 0;

        cin >> n;

        for(int j = 4; j <= n; j++){
            dp[j] = dp[j - 1] + dp[j - 2] + dp[j - 3];
        }

        res.push_back(dp[n]);
    }

    for(int i = 0; i < T; i++) cout << res[i] << '\n';

    return 0;
}
