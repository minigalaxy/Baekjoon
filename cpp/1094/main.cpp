#include <iostream>

using namespace std;

int X;

int res = 0;

int main()
{
    cin >> X;
    
    while(X > 0){
        if(X & 1) res++;
        
        X = X >> 1;
    }
    
    cout << res;
    
    return 0;
}
