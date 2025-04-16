#include <iostream>

using namespace std;

int n;

int a[1000];

int res;

int main()
{
    while(true){
        cin >> n;
        
        if(n == 0) break;
    
        res = 0;
        
        for(int i = 0; i < n; i++) cin >> a[i];
        
        for(int i = 0; i < n - 2; i++){
            res = max(res, a[i] + a[i + 1] + a[i + 2]);
        }
        
        cout << res << '\n';
    }
    
    return 0;
}
