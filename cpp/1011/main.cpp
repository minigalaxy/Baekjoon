#include <iostream>
#include <cmath>

using namespace std;

int T;

int x, y;

int main()
{
    cin >> T;
    
    for(int i = 0; i < T; i++){
        cin >> x >> y;
        
        int d = y - x, m = sqrt(d), res = 0;
    
        d -= m * m;
        res += m * 2 - 1;
        
        res += d / m;
        d %= m;
        
        if(d) res++;
        
        cout << res << '\n';
    }
    
    return 0;
}
