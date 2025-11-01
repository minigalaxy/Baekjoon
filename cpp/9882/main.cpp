#include <iostream>
#include <algorithm>

using namespace std;

int C[12];

int sum[4] = { 0, }, cnt[4] = { 0, };

int solve(int cur){
    if(cur == 12) return *max_element(sum, sum + 4) - *min_element(sum, sum + 4);
    
    int ret = 3'000'000;
    
    for(int i = 0; i < 4; i++){
        if(cnt[i] < 3){
            cnt[i]++;
            sum[i] += C[cur];
            
            ret = min(ret, solve(cur + 1));
            
            cnt[i]--;
            sum[i] -= C[cur];
        }
    }
    
    return ret;
}

int main()
{
    for(int i = 0; i < 12; i++) cin >> C[i];
    
    cout << solve(0);
    
    return 0;
}
