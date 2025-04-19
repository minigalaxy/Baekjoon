#include <iostream>

using namespace std;

char c[2];
int r[2];

int main()
{
    cin >> c[0] >> r[0] >> c[1] >> r[1];
    
    cout << min(abs(c[0] - c[1]), abs(r[0] - r[1])) << ' ' << max(abs(c[0] - c[1]), abs(r[0] - r[1]));
    
    return 0;
}
