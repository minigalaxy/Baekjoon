#include <iostream>
#include <cmath>

using namespace std;

long long N, L, W, H;

int main()
{
    cin >> N >> L >> W >> H;
    
    double l = 0, r = L;
    
    for(int i = 0; i < 100; i++){
        double m = (l + r) / 2;
            
        if(long(L / m) * long(W / m) * long(H / m) >= N) l = m;
        else r = m;
    }
    
    cout.precision(9);
    cout << fixed;
    
    cout << l;
    
    return 0;
}
