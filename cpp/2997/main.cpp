#include <iostream>
#include <algorithm>

using namespace std;

int n[3];

int main()
{
    cin >> n[0] >> n[1] >> n[2];
    
    sort(n, n + 3);
    
    if(n[1] - n[0] > n[2] - n[1]) cout << (n[1] + n[0]) / 2;
    else if(n[1] - n[0] < n[2] - n[1]) cout << (n[2] + n[1]) / 2;
    else cout << n[2] + n[2] - n[1];
    
    return 0;
}
