#include <iostream>
#include <queue>

using namespace std;

string S;

bool m[2500][2500] = { false, };

int s;

int dp[2501];

int main()
{
    cin >> S;
    
    s = S.size();
    
    for(int i = 0; i < s; i++){
        int d = 0;
        
        while(i - d > -1 && i + d < s && S[i - d] == S[i + d]){
            m[i - d][i + d] = true;
            d++;
        }
    }
    for(int i = 0; i < s - 1; i++){
        int d = 0;
        
        while(i - d > -1 && i + 1 + d < s && S[i - d] == S[i + 1 + d]){
            m[i - d][i + 1 + d] = true;
            d++;
        }
    }
    
    for(int i = 1; i <= s; i++){
        dp[i] = 2500;
        
        for(int j = 1; j <= i; j++){
            if(m[j - 1][i - 1]){
                dp[i] = min(dp[i], dp[j - 1] + 1);
            }
        }
    }
    
    cout << dp[s];
    
    return 0;
}
