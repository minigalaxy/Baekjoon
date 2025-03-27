#include <iostream>

using namespace std;

int t1, t2, e1, e2, f1, f2;

int m1, m2;

int main()
{
    cin >> t1 >> e1 >> f1;
    cin >> t2 >> e2 >> f2;
    
    m1 = t1 * 3 + e1 * 20 + f1 * 120;
    m2 = t2 * 3 + e2 * 20 + f2 * 120;
    
    if(m1 > m2) cout << "Max";
    else if(m1 < m2) cout << "Mel";
    else cout << "Draw";
    
    return 0;
}
