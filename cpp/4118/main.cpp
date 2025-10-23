#include <iostream>

using namespace std;

int N;

int t;

bool cnt[49];

int main()
{
    while(true){
        fill(cnt, cnt + 49, false);
            
        cin >> N;
    
        if(N == 0) break;
    
        for(int i = 0; i < N; i++){
            for(int j = 0; j < 6; j++){
                cin >> t;
                
                cnt[t - 1] = true;
            }
        }
        
        bool flag = true;
        
        for(int i = 0; i < 49; i++){
            if(!cnt[i]) flag = false;
        }
        
        cout << (flag ? "Yes\n" : "No\n");
    }
    
    return 0;
}
