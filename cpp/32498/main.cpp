#include <iostream>

using namespace std;

int n, d;

int res = 0;

int main()
{
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> d;
        
        if(d % 2 == 1) res++;
    }
    
    cout << res;
    
    return 0;
}
