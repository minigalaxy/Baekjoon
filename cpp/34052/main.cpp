#include <iostream>

using namespace std;

int t[4];

int main()
{
    for(int i = 0; i < 4; i++) cin >> t[i];
    
    cout << ((t[0] + t[1] + t[2] + t[3] + 300 <= 1800) ? "Yes" : "No");
    
    return 0;
}
