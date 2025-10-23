#include <iostream>

using namespace std;

int T;

int n;

int main()
{
    cin >> T;
    
    for(int i = 0; i < T; i++){
        int res = 0, mn = 100;
            
        for(int j = 0; j < 7; j++){
            cin >> n;
            
            if(n % 2 == 0){
                res += n;
                mn = min(mn, n);
            }
        }
        
        cout << res << ' ' << mn << '\n';
        
    }
    
    return 0;
}
