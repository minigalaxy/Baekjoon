#include <iostream>

using namespace std;

int N;

long long dp[100][10][1024] = { 0, };

long long res = 0;

int main()
{
    cin >> N;
        
    for(int i = 1; i < 10; i++){
        dp[0][i][1 << i] = 1;
    }
    
    for(int i = 0; i < N - 1; i++){
        for(int j = 0; j < 10; j++){
            if(j + 1 < 10){
                for(int k = 0; k < 1024; k++){
                    dp[i + 1][j + 1][k | (1 << (j + 1))] += dp[i][j][k];
                    dp[i + 1][j + 1][k | (1 << (j + 1))] %= 1000000000;
                }
            }
            if(j - 1 > -1){
                for(int k = 0; k < 1024; k++){
                    dp[i + 1][j - 1][k | (1 << (j - 1))] += dp[i][j][k];
                    dp[i + 1][j - 1][k | (1 << (j - 1))] %= 1000000000;
                }
            }
        }
    }
    
    for(int i = 0; i < 10; i++){
        res += dp[N - 1][i][1023];
        res %= 1000000000;
    }
    
    cout << res;
    
    return 0;
}
