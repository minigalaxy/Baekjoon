#include <iostream>

using namespace std;

int n, k;

int main()
{
    while(cin >> n >> k){
        cout << n + (n - k) / (k - 1) + 1 << '\n';
    }
    
    return 0;
}
