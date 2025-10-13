#include <iostream>

using namespace std;

long long X, Y, W, S;

long long res = 0;

int main()
{
    cin >> X >> Y >> W >> S;
    
    if(S < W * 2){
        res += S * min(X, Y);
        
        if(S < W){
            if((max(X, Y) - min(X, Y)) % 2 == 0) cout << S * max(X, Y);
            else cout << res + S * ((max(X, Y) - min(X, Y)) - 1) + W;
        } else cout << res + W * (max(X, Y) - min(X, Y));
    } else cout << W * (X + Y);
    
    return 0;
}
