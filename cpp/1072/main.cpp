#include <iostream>

using namespace std;

long long X, Y, Z;

int main()
{
    cin >> X >> Y;
    
    Z = (Y * 100 / X);
    
    if(Z >= 99) cout << -1;
    else {
        int l = 0, r = X;
            
        while(l < r){
            int m = (l + r) / 2;
            
            if((Y + m) * 100 / (X + m) >= Z + 1) r = m;
            else l = m + 1;
        }
        
        cout << l;
    }
    
    return 0;
}
