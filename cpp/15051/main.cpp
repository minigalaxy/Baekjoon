#include <iostream>

using namespace std;

int A[3];

int main()
{
    cin >> A[0] >> A[1] >> A[2];
    
    cout << min(min((A[0] * 2 + A[1]) * 2, (A[1] + A[2] * 2) * 2), (A[0] + A[2]) * 2);
    
    return 0;
}
