#include <iostream>

using namespace std;

int d;

int c;

int res = 0;

int main()
{
    cin >> d;
    
    for(int i = 0; i < 5; i++){
        cin >> c;
        
        if(c % 10 == d % 10) res++;
    }
    
    cout << res;
    
    return 0;
}
