#include <iostream>

using namespace std;

int N;

int i;

int cnt[51] = { 0, };

int main()
{
    cin >> N;
    
    for(int j = 0; j < N; j++){
        cin >> i;
        
        cnt[i]++;
    }
    
    for(int j = 50; j > 0; j--){
        if(cnt[j] == j){
            cout << j;
            
            return 0;
        }
    }
    
    if(cnt[0] > 0) cout << -1;
    else cout << 0;
    
    return 0;
}
