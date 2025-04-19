#include <iostream>

using namespace std;

int A, B, C;

int main()
{
    cin >> A >> B >> C;
    
    cout << ((A + B >= C * 2) ? A + B - C * 2 : A + B);
    
    return 0;
}
