#include <iostream>

using namespace std;

int A[3], B[3];

int main()
{
    cin >> A[0] >> A[1] >> A[2] >> B[0] >> B[1] >> B[2];
    
    if(A[0] * 3 + A[1] * 2 + A[2] == B[0] * 3 + B[1] * 2 + B[2]) cout << 'T';
    else cout << ((A[0] * 3 + A[1] * 2 + A[2] > B[0] * 3 + B[1] * 2 + B[2]) ? 'A' : 'B');
    
    return 0;
}
