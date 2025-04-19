#include <iostream>

using namespace std;

double a, b;

int main()
{
    cin >> a >> b;
    
    cout << (a * (100 - b) / 100 < 100);
    
    return 0;
}
