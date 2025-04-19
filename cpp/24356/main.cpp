#include <iostream>

using namespace std;

int t1, m1, t2, m2;

int main()
{
    cin >> t1 >> m1 >> t2 >> m2;
    
    cout << (24 * 60 + t2 * 60 + m2 - (t1 * 60 + m1)) % (24 * 60) << ' ' << ((24 * 60 + t2 * 60 + m2 - (t1 * 60 + m1)) % (24 * 60)) / 30;
    
    return 0;
}
