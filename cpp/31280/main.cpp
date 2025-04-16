#include <iostream>
#include <algorithm>

using namespace std;

int n[4];

int main()
{
    cin >> n[0] >> n[1] >> n[2] >> n[3];
    
    cout << n[0] + n[1] + n[2] + n[3] - *min_element(n, n + 4) + 1;
    
    return 0;
}
