#include <iostream>

using namespace std;

int A, B;

int main()
{
    cin >> A >> B;
    
    if(A + B >= 100) cout << 3;
    else if(A + B >= 10) cout << 2;
    else cout << 1;
    
    return 0;
}
