#include <iostream>
#include <algorithm>

using namespace std;

int a[4], b[2];

int main()
{
    cin >> a[0] >> a[1] >> a[2] >> a[3] >> b[0] >> b[1];
    
    cout << a[0] + a[1] + a[2] + a[3] - *min_element(a, a + 4) + max(b[0], b[1]);
    
    return 0;
}
