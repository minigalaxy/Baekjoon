#include <iostream>
#include <algorithm>

using namespace std;

int n[3];

int main()
{
    cin >> n[0] >> n[1] >> n[2];
    
    sort(n, n + 3);
    
    cout << n[2] - n[0];
    
    return 0;
}
