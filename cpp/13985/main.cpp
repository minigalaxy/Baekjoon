#include <iostream>

using namespace std;

char o;

int a, b, c;

int main()
{
    cin >> a >> o >> b >> o >> c;
    
    cout << ((a + b == c) ? "YES" : "NO");
    
    return 0;
}
