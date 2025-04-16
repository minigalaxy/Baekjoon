#include <iostream>

using namespace std;

int s[3][2];

int main()
{
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++) cin >> s[j][i];
    }
    
    if(s[0][0] + s[1][0] * 2 + s[2][0] * 3 > s[0][1] + s[1][1] * 2 + s[2][1] * 3) cout << 1;
    else if(s[0][0] + s[1][0] * 2 + s[2][0] * 3 < s[0][1] + s[1][1] * 2 + s[2][1] * 3) cout << 2;
    else cout << 0;
    
    return 0;
}
