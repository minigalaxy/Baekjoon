#include <iostream>

using namespace std;

int n;

int main()
{
    cin >> n;
    
    n--;
    
    cout << char('a' + n % 8) << n / 8 + 1;
    
    return 0;
}
