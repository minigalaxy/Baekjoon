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
    
    if(res > 0) cout << "Right";
    else if(res < 0) cout << "Left";
    else cout << "Stay";
    
    return 0;
}
