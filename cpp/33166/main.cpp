#include <iostream>

using namespace std;

int P, Q, A, B;

int main()
{
    cin >> P >> Q >> A >> B;
    
    cout << min(P, Q) * A + max(0, Q - P) * B;
    
    return 0;
}
