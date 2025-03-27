#include <iostream>

using namespace std;

int s1, s2;

int main()
{
    cin >> s1 >> s2;
    
    if(s1 * 2 >= s2) cout << 'E';
    else cout << 'H';
    
    return 0;
}
