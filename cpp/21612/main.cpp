#include <iostream>

using namespace std;

int B;

int main()
{
    cin >> B;
    
    cout << 5 * B - 400 << '\n' << min(1, max(-1, -(5 * B - 500)));
    
    return 0;
}
