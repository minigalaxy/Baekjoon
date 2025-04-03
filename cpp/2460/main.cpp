#include <iostream>

using namespace std;

int a, b;

int tmp = 0, res = 0;

int main()
{
    for(int i = 0; i < 10; i++){
        cin >> a >> b;
        
        tmp -= a;
        tmp += b;
        
        res = max(res, tmp);
    }
    
    cout << res;
    
    return 0;
}
