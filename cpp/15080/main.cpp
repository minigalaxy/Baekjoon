#include <iostream>

using namespace std;

char t;

int h[2], m[2], s[2];

int main()
{
    for(int i = 0; i < 2; i++) cin >> h[i] >> t >> m[i] >> t >> s[i];
    
    int res = (h[1] - h[0]) * 3600 + (m[1] - m[0]) * 60 + s[1] - s[0];
    
    if(res < 0) res += 3600 * 24;
    
    cout << res;
    
    return 0;
}
