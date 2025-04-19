#include <iostream>

using namespace std;

int t[2], v[2];

int main()
{
    cin >> t[0] >> v[0] >> t[1] >> v[1];
    
    if(t[1] < 0 && v[1] >= 10) cout << "A storm warning for tomorrow! Be careful and stay home if possible!";
    else if(t[1] < t[0]) cout << "MCHS warns! Low temperature is expected tomorrow.";
    else if(v[1] > v[0]) cout << "MCHS warns! Strong wind is expected tomorrow.";
    else cout << "No message";
    
    return 0;
}
