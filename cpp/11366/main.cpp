#include <iostream>


using namespace std;

int a, b, c;

int main()
{
    while(true){
        cin >> a >> b >> c;
        
        if(a + b + c == 0) break;
        
        if(a + b == 0) cout << 0 << '\n';
        else {
            int t;
            
            for(int i = 0; i < c; i++){
                t = a;
                a = b;
                b = t + b;
            }
            
            cout << b << '\n';
        }
    }
    return 0;
}
