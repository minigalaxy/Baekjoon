#include <iostream>

using namespace std;

int T;

int a, b;

int res;

int main()
{
    cin >> T;
    
    for(int i = 0; i < T; i++){
        res = 1;
            
        cin >> a >> b;
        
        for(int j = 0; j < b; j++){
            res *= a;
            res %= 10;
        }
        
        cout << ((res > 0) ? res : 10) << '\n';
    }
    
    return 0;
}
