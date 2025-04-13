#include <iostream>

using namespace std;

int N;

int edge[16][16] = { 0, };

int dp[16][65536];

int dfs(int c, int v){
    if(v == (1 << N) - 1){
        if(edge[c][0] == 0) return 1000000000;
        else return edge[c][0];
    }
    
    if(dp[c][v] != -1) return dp[c][v];
    
    dp[c][v] = 1000000000;
    
    for(int i = 0; i < N; i++){
        if(edge[c][i] && !(v & (1 << i))){
            dp[c][v] = min(dp[c][v], edge[c][i] + dfs(i, v | (1 << i)));
        }
    }
    
    return dp[c][v];
}

int main()
{
    fill(dp[0], dp[16], -1);
    
    cin >> N;
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> edge[i][j];
        }
    }
    
    cout << dfs(0, 1);
    
    return 0;
}
