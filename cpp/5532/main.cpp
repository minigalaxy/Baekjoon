#include <iostream>

using namespace std;

int L, A, B, C, D;

int main()
{
    cin >> L >> A >> B >> C >> D;
    
    cout << L - max(A / C + (A % C > 0), B / D + (B % D > 0));
    
    return 0;
}
