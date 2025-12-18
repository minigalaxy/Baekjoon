#include <iostream>

using namespace std;

double p, c;

int main()
{
    cin >> p;
    
    cout.precision(2);
    cout.setf(ios_base::fixed);
    
    while(true){
        cin >> c;
        
        if(c == 999) break;
        
        cout << c - p << '\n';
        
        p = c;
    }
    
    return 0;
}
