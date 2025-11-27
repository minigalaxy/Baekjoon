#include <iostream>

using namespace std;

int a, b, x, y;

int main()
{
    cin >> a >> b >> x >> y;
    
    if(a == 0){
        if(x == 0 && y < b) cout << 3;
        else cout << 1;
    } else if(b == 0){
        if(y == 0 && x < a) cout << 3;
        else cout << 1;
    } else cout << 2;
    
    return 0;
}
