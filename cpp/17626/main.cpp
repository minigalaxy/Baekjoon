#include <iostream>
#include <cmath>

using namespace std;

int n;

int dp[50001] = { 0, 1, 2, 3, };

int main()
{
    cin >> n;

    for(int i = 1; i <= sqrt(n); i++) dp[i * i] = 1;

    for(int i = 5; i <= n; i++){
        int m = 50001;

        if(dp[i] == 0){
            for(int j = 1; j * j < i; j++){
                if(dp[i - j * j] < m){
                    dp[i] = dp[i - j * j] + 1;
                    m = dp[i];
                }
            }
        }
    }

    cout << dp[n];

    return 0;
}
