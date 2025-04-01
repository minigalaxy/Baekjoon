#include <iostream>

using namespace std;

int a, b;

int main()
{
    cin >> a >> b;
    
    a--;
    b--;
    
    cout << abs(a / 4 - b / 4) + abs(a % 4 - b % 4);
    
    return 0;
}
