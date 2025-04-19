#include <iostream>

using namespace std;

int A, B, C;

int main()
{
    cin >> A >> B >> C;
    
    cout << (A == B + C || B == C + A || C == A + B);
    
    return 0;
}
