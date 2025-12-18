#include <iostream>

using namespace std;

int a1, a2, a3;

int main()
{
    while(true){
        cin >> a1 >> a2 >> a3;
        
        if(a1 == 0 && a2 == 0 && a3 == 0) break;
        
        if(a3 - a2 == a2 - a1) cout << "AP " << a3 * 2 - a2 << '\n';
        else cout << "GP " << a3 * a3 / a2 << '\n';
    }
    
    return 0;
}
