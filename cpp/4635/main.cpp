#include <iostream>

using namespace std;

int n;

int s, t;

int p;

int main()
{
    while(cin >> n && n != -1){
        int res = 0;
            
        cin >> s >> t;
        
        res += s * t;
    
        p = t;
        
        for(int i = 1; i < n; i++){
            cin >> s >> t;
            
            res += s * (t - p);
            
            p = t;
        }
        
        cout << res << " miles\n";
    }
    return 0;
}
