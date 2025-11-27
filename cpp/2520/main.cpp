#include <iostream>
#include <algorithm>

using namespace std;

int T;

int c, y, s[2], f;

int b, g[2], w;

int main()
{
    cin >> T;
    
    for(int i = 0; i < T; i++){
        cin >> c >> y >> s[0] >> s[1] >> f;
        cin >> b >> g[0] >> g[1] >> w;
        
        cout << min({ c * 2, y * 2, s[0] * 4, s[1] * 16, f * 16 / 9, b + g[0] / 30 + g[1] / 25 + w / 10 }) << '\n';
    }
    
    return 0;
}
