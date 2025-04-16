#include <iostream>
#include <algorithm>

using namespace std;

int n[3];

int main()
{
    cin >> n[0] >> n[1] >> n[2];
    
    cout << 3 * *max_element(n, n + 3) - n[0] - n[1] - n[2];
    
    return 0;
}
