#include <iostream>

using namespace std;

int A, B, C, D;

int main()
{
    cin >> A >> B >> C >> D;
    
    cout << (A + B - 1 + C + D - 1) % 4 + 1;
    
    return 0;
}
