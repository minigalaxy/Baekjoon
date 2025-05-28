#include <iostream>

using namespace std;

long long n, k;
int x;

int main()
{
    cin >> n >> k >> x;
    
    if(x == 1) cout << n - 3 * (k - 1);
    else if(x == 2 || x == 3 || x == 4) cout << n - 1 - 3 * (k - 1);
    else cout << n - 2 - 3 * (k - 1);
    
    return 0;
}
