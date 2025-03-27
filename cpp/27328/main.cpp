#include <iostream>

using namespace std;

int A, B;

int main()
{
    cin >> A >> B;
    
    if(A < B) cout << -1;
    else if(A == B) cout << 0;
    else cout << 1;
    
    return 0;
}
