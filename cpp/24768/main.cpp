#include <iostream>

using namespace std;

int x, y;

int main()
{
    while(true){
        cin >> x >> y;
        
        if(x == 0 && y == 0) break;
        
        if(x + y == 13) cout << "Never speak again.\n";
        else if(x < y) cout << "Left beehind.\n";
        else if(x == y) cout << "Undecided.\n";
        else cout << "To the convention.\n";
    }
    
    return 0;
}
