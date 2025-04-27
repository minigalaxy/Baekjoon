#include <iostream>

using namespace std;

int T;

double q;
string u;

int main()
{
    cout.precision(4);
    cout.setf(ios_base::fixed);
    
    cin >> T;
    
    for(int i = 0; i < T; i++){
        cin >> q >> u;
        
        if(u == "kg") cout << q * 2.2046 << " lb\n";
        else if(u == "lb") cout << q * 0.4536 << " kg\n";
        else if(u == "l") cout << q * 0.2642 << " g\n";
        else cout << q * 3.7854 << " l\n";
    }
    
    return 0;
}
