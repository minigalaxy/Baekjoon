#include <iostream>

using namespace std;

unsigned int n, m;

int main()
{
    while(true){
        cin >> n >> m;
        
        if(n == 0 && m == 0) break;
        
        unsigned long long res = 1;
        
        for(int i = 1; i <= min(n, m); i++){
            res = res * (max(n, m) + i) / i;
        }
        
        cout << res << '\n';
    }
    
    
    return 0;
}
