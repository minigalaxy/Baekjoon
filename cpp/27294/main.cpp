#include <iostream>

using namespace std;

int T, S;

int main()
{
    cin >> T >> S;
    
    if(S || (T <= 11 || T >= 17)) cout << 280;
    else cout << 320;
    
    return 0;
}
