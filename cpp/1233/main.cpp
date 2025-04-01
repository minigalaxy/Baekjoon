#include <iostream>
#include <algorithm>

using namespace std;

int S1, S2, S3;

int cnt[81] = { 0, };

int main()
{
    cin >> S1 >> S2 >> S3;
    
    for(int i = 1; i <= S1; i++){
        for(int j = 1; j <= S2; j++){
            for(int k = 1; k <= S3; k++){
                cnt[i + j + k]++;
            }
        }
    }
    
    cout << max_element(cnt, cnt + 81) - cnt;
    
    return 0;
}
