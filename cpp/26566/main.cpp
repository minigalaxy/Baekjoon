#include <iostream>

using namespace std;

int n;

double A1, P1, R1, P2;

int main()
{
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> A1 >> P1 >> R1 >> P2;
        
        if(A1 / P1 > R1 * R1 * 3.141592 / P2) cout << "Slice of pizza\n";
        else cout << "Whole pizza\n";
    }
    
    return 0;
}
