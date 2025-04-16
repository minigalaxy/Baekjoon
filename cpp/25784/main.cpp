#include <iostream>

using namespace std;

int A, B, C;

int main()
{
    cin >> A >> B >> C;
    
    if(A + B == C || B + C == A || C + A == B) cout << 1;
    else if(A * B == C || B * C == A || C * A == B) cout << 2;
    else cout << 3;
    
    return 0;
}
