#include <iostream>

using namespace std;

int n;

int t, l;

int res = 200;

int main()
{
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> t >> l;
        
        res = min(res, t + l);
    }
    
    cout << res;
    
    return 0;
}
