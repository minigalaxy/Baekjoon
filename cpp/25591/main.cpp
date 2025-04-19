#include <iostream>

using namespace std;

int a, b;

int main()
{
    cin >> a >> b;
    
    cout << 100 - a << ' ' << 100 - b << ' ' << 100 - (100 - a) - (100 - b) << ' ' << (100 - a) * (100 - b) << ' ' << ((100 - a) * (100 - b)) / 100 << ' ' << ((100 - a) * (100 - b)) % 100 << '\n' << a * b / 100 << ' ' << a * b % 100;

    
    return 0;
}
