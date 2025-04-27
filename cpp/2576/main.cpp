#include <iostream>

using namespace std;

int t;

int res[2] = { 0, 99 };

int main()
{
    for(int i = 0; i < 7; i++){
        cin >> t;
        
        if(t % 2 == 1){
            res[0] += t;
            res[1] = min(res[1], t);
        }
    }
    
    if(res[0] == 0) cout << -1;
    else cout << res[0] << '\n' << res[1];
    
    return 0;
}
