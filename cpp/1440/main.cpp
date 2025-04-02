#include <iostream>
#include <algorithm>

using namespace std;

int t[3];

int res = 0;

int main()
{
    scanf("%d:%d:%d", &t[0], &t[1], &t[2]);
    
    for(int i = 0; i < 3; i++){
        if(t[i] >= 1 && t[i] <= 12) res += 2;
    }
    
    if(*max_element(t, t + 3) < 60) cout << res;
    else cout << 0;
    
    return 0;
}
