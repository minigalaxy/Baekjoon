#include <iostream>

using namespace std;

int A, P, C;

int main()
{
    cin >> A >> P >> C;
    
    cout << max(A + C, P);
    
    return 0;
}
