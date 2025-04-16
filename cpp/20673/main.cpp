#include <iostream>

using namespace std;

int p, q;

int main()
{
    cin >> p >> q;
    
    if(p <= 50 && q <= 10) cout << "White";
    else if(q > 30) cout << "Red";
    else cout << "Yellow";
    
    return 0;
}
