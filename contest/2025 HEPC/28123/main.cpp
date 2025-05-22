#include <iostream>

using namespace std;

long long n, k;
int x;

int main()
{
    cin >> n >> k >> x;
    
    n -= 2;
    
    if(n >= 0) cout << (n / 103 * 10) + (n % 103) / 10;
    else cout << 0;
    
    return 0;
}
