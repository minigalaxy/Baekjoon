#include <iostream>

using namespace std;

int c[3], s[3];

int res = 0;

int main()
{
    scanf("%d:%d:%d", &c[0], &c[1], &c[2]);
    scanf("%d:%d:%d", &s[0], &s[1], &s[2]);
    
    c[1] += c[0] * 60;
    c[2] += c[1] * 60;
    
    s[1] += s[0] * 60;
    s[2] += s[1] * 60;
    
    res = s[2] - c[2];
    
    if(res < 0) res += 60 * 60 * 24;
        
    printf("%02d:%02d:%02d", res / 3600, (res % 3600) / 60, res % 60);

    return 0;
}
