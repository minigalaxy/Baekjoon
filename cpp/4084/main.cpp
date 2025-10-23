#include <iostream>

using namespace std;

int a, b, c, d;
int ta, tb, tc, td;

int main()
{
    while(true){
        cin >> a >> b >> c >> d;
        
        if(a == 0) break;
        
        int res = 0;
    
        while(a != b || b != c || c != d){
            ta = abs(a - b);
            tb = abs(b - c);
            tc = abs(c - d);
            td = abs(d - a);
            
            a = ta;
            b = tb;
            c = tc;
            d = td;
            
            res++;
        }
        
        cout << res << '\n';
    }
    
    
    return 0;
}
