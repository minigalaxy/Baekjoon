#include <iostream>
#include <algorithm>

using namespace std;

long long n[3];

int main()
{
    cin >> n[0] >> n[1] >> n[2];
    
    sort(n, n + 3);
    
    cout << n[1];
    
    return 0;
}
