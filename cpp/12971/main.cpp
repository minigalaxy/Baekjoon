#include <iostream>

using namespace std;

int P1, P2, P3, X1, X2, X3;

int main()
{
    cin >> P1 >> P2 >> P3 >> X1 >> X2 >> X3;
    
    for(int i = X1; i < 1000000000; i += P1){
        if(i % P2 == X2 && i % P3 == X3){
            cout << i;
            
            return 0;
        }
    }
    
    cout << -1;
    
    return 0;
}
