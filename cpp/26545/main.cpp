#include <iostream>

using namespace std;

int n;

int res = 0;

int main()
{
    cin >> n;
    
    for(int i = 0; i < n; i++){
        int t;
        cin >> t;
        
        res += t;
    }
    
    cout << res;
    
    return 0;
}
