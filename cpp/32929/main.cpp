#include <iostream>

using namespace std;

int x;

int main()
{
    cin >> x;
    
    if(x % 3 == 0) cout << 'S';
    else if(x % 3 == 1) cout << 'U';
    else cout << 'O';
    
    return 0;
}
