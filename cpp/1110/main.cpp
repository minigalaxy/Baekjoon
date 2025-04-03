#include <iostream>

using namespace std;

int N;

int x;

int res = 1;

int main()
{
    cin >> N;
    
    x = N;
    
    x = (x % 10) * 10 + ((x / 10) + (x % 10)) % 10;
    
    while(x != N){
        x = (x % 10) * 10 + ((x / 10) + (x % 10)) % 10;
            
        res++;
    }
    
    cout << res;
    
    return 0;
}
