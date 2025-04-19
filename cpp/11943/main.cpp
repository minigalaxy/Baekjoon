#include <iostream>

using namespace std;

int A, B;

int C, D;

int main()
{
    cin >> A >> B >> C >> D;
    
    cout << min(A + D, B + C);
    
    return 0;
}
