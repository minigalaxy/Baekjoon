#include <iostream>

using namespace std;

int S, A, B;

int main()
{
    cin >> S >> A >> B;
    
    cout << 250 + 100 * (max(0, S - A) / B)  + 100 * (max(0, S - A) % B > 0);
    
    return 0;
}
