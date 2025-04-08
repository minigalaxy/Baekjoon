#include <iostream>

using namespace std;

int n;

int res = 1;

int main()
{
    cin >> n;
    
    for(int i = 1; i <= n; i++){
        res *= i;
        res %= 10;
    }
    
    cout << res;
    
    return 0;
}
