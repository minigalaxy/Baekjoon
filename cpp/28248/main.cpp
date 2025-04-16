#include <iostream>

using namespace std;

int P, C;

int main()
{
    cin >> P >> C;
    
    cout << 500 * (P > C) + 50 * P - 10 * C;
    
    return 0;
}
