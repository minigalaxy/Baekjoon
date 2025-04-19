#include <iostream>

using namespace std;

int T;

int s[5] = { 0, };

int main()
{
    cin >> T;
    
    for(int i = 0; i < T; i++) cin >> s[i];
    
    cout << (((s[0] > s[2]) ? (s[0] - s[2]) * 508 : (s[2] - s[0]) * 108) + ((s[1] > s[3]) ? (s[1] - s[3]) * 212 : (s[3] - s[1]) * 305) + s[4] * 707) * 4763;
    
    return 0;
}
