#include <iostream>
#include <vector>

using namespace std;

int T, N;

long long dp[101] = { 0, 1, 1, 1, 2, 2, 3, 4, 5, 7, 9, };
int k = 11;

vector<long long> res;

int main()
{
    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> N;

        for(int j = k; j <= N; j++){
            dp[j] = dp[j - 1] + dp[j - 5];
            k++;
        }

        res.push_back(dp[N]);
    }

    for(int i = 0; i < T; i++) cout << res[i] << '\n';

    return 0;
}
