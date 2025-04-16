#include <iostream>

using namespace std;

int n, m;

int main()
{
    cin >> n >> m;
    
    if(n > 7) cout << n - 7;
    else cout << m + 7;
    
    return 0;
}
