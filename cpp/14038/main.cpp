#include <iostream>

using namespace std;

char r;

int res = 0;

int main()
{
    for(int i = 0; i < 6; i++){
        cin >> r;
        
        if(r == 'W') res++;
    }
    
    if(res >= 5) cout << 1;
    else if(res >= 3) cout << 2;
    else if(res >= 1) cout << 3;
    else cout << -1;
        
    return 0;
}
