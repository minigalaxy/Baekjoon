#include <iostream>

using namespace std;

long long S, t;

int main()
{
    cin >> S;
    
    t = S;
    
    for(long long i = 1; i <= S; i++){
        if(t >= i) t -= i;
        else {
            cout << i - 1;
            
            return 0;
        }
    }
    
    cout << 1;
    
    return 0;
}
