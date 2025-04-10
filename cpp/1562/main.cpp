#include <iostream>

using namespace std;

int N;

int dp[100][10] = { 0, };

int main()
{
    cin >> N;
    
    for(int i = 1; i < 10; i++) dp[0][i] = 1;
    
    for(int i = 1; i < N; i++){
        dp[i][0] = dp[i]
        for(int j = 1; j < 9; j++){
            dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j + 1];
        }
        
    }
    
    return 0;
}
