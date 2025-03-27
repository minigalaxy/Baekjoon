#include <iostream>

using namespace std;

int s, w;

int main()
{
    cin >> s >> w;
    
    cout << w + ((s >= 20) ? 24 - s : -s);
    
    return 0;
}
