#include <iostream>

using namespace std;

int m, d;

int main()
{
    cin >> m >> d;
    
    if(m == 2){
        if(d == 18) cout << "Special";
        else cout << ((d < 18) ? "Before" : "After");
    } else cout << ((m < 2) ? "Before" : "After");
    
    return 0;
}
