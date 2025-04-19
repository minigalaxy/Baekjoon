#include <iostream>

using namespace std;

int n, k, a, b;

int main()
{
    cin >> n >> k >> a >> b;
    
    cout << (n + k - 2) * b << ' ' << (n - 1) * a;
    
    return 0;
}
