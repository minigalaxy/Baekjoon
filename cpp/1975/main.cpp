#include <iostream>

using namespace std;

int T;

int N;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> T;
    
    for(int i = 0; i < T; i++){
        cin >> N;
        
        int res = 0;
        
        for(int j = 2; j <= N; j++){
            int t = j;
            
            while(N >= t){
                if(N % t == 0) res++;
                else break;
                
                t *= j;
            }
        }
        
        cout << res << '\n';
    }
    
    return 0;
}
