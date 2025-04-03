#include <iostream>

using namespace std;

int N;

int t = 1;

int res = 0;

int main()
{
    cin >> N;
    
    while(N > 0){
        if(N < t) t = 1;
        N -= t++;
        
        res++;
    }
    
    cout << res;
    
    return 0;
}
