#include <iostream>

using namespace std;

int a, b;

int main()
{
    cin >> a >> b;
    
    if(a == b) cout << '=';
    else {
        if(a == 0){
            if(b == 2) cout << '>';
            else if(b == 5) cout << '<';
            else cout << '>';
        } else if(a == 2){
            if(b == 0) cout << '<';
            else if(b == 5) cout << '>';
            else cout << '>';
        } else if(a == 5) {
            if(b == 0) cout << '>';
            else if(b == 2) cout << '<';
            else cout << '>';
        } else {
            if(b == 0 || b == 2 || b == 5) cout << '<';
            else cout << '=';
        }
    }
    
    return 0;
}
