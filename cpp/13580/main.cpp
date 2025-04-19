#include <iostream>

using namespace std;

int A, B, C;

int main()
{
    cin >> A >> B >> C;
    
    if(A == B || B == C || A == C || A + B == C || B + C == A || A + C == B) cout << "S";
    else cout << "N";
    
    return 0;
}
