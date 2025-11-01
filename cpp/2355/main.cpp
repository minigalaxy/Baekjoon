#include <iostream>

using namespace std;

long long A, B;

int main()
{
    cin >> A >> B;
    
    cout << (abs(A - B) + 1) * (A + B) / 2;
    
    return 0;
}
