#include <iostream>

using namespace std;

int t;

int n, e;

int p;

int main()
{
    cin >> t;
    
    for(int i = 0; i < t; i++){
        int res[2] { 0, -100000 };
            
        cin >> n >> e;
        
        int l[100001];
        
        for(int j = 1; j <= n; j++) l[j] = j;
        
        int m = 1;
        
        for(int j = 0; j < e; j++){
            cin >> p;
            
            l[p] = (m--) - 1;
        }
        
        for(int j = 1; j <= n; j++){
            if(l[j] > res[1]){
                res[0] = j;
                res[1] = l[j];
            }
        }
        
        cout << res[0] << '\n';
    }
    
    return 0;
}
