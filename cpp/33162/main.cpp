#include <iostream>

using namespace std;

int X;

int main()
{
    cin >> X;
    
    cout << ((X % 2 == 0) ? X / 2 : X / 2 + 3);
    
    return 0;
}
