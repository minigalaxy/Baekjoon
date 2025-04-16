#include <iostream>

using namespace std;

int k;

int res = 0;

int main()
{
    cin >> k;
    
    while(k % 10 == 0) k /= 10;
    
    while(k){
        if(k % 10 == 0) res++;
        
        k /= 10;
    }
    
    cout << res;
    
    return 0;
}
