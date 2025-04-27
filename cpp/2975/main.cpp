#include <iostream>

using namespace std;

int b;

char l;

int a;

int res;

int main()
{
    while(true){
        cin >> b >> l >> a;
        
        if(b == 0 && l == 'W' && a == 0) break;
        
        if(l == 'W') res = b - a;
        else res = b + a;
        
        if(res < -200) cout << "Not allowed\n";
        else cout << res << '\n';
    }
    
    return 0;
}
