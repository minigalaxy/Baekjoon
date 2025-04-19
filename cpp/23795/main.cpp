#include <iostream>

using namespace std;

int m;

int res = 0;

int main()
{
    while(true){
        cin >> m;
        
        if(m == -1) break;
        
        res += m;
    }
    
    cout << res;
    
    return 0;
}
