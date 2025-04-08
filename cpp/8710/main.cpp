#include <iostream>

using namespace std;

int k, w, m;

int main()
{
    cin >> k >> w >> m;
    
    cout << (w - k) / m + ((w - k) % m > 0);
    
    return 0;
}
