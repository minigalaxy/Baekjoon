#include <iostream>

using namespace std;

int A, B;

int main()
{
    cin >> A >> B;
    
    cout << (A + B - 1) % 12 + 1;
    
    return 0;
}
