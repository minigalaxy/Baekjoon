#include <iostream>

using namespace std;

int A, B, C, D, E;

int res = 0;

int main()
{
    cin >> A >> B >> C >> D >> E;
    
    if(A < 0){
        res -= C * A;
        A = 0;
    }
    if(A == 0) res += D;
    res += E * (B - A);
    
    cout << res;
    
    return 0;
}
