#include <iostream>

using namespace std;

int HH, MM;

int main()
{
    cin >> HH >> MM;
    
    cout << (HH - 9) * 60 + MM;
    
    return 0;
}
