#include <iostream>

using namespace std;

int N, S;

int Seq[20];

int res = 0;

int solve(int cur, int sum, bool b){
    if(cur == N) return (sum == S && b);
    
    return solve(cur + 1, sum, false) + solve(cur + 1, Seq[cur] + sum, true) + (sum == S && b);
}

int main()
{
    cin >> N >> S;
    
    for(int i = 0; i < N; i++) cin >> Seq[i];
    
    cout << solve(0, 0, false);
    
    return 0;
}
