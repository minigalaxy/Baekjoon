#include <iostream>

using namespace std;

int A[2], B[2];

int main()
{
    cin >> A[0] >> A[1] >> B[0] >> B[1];

    while(A[1] > 0 && B[1] > 0){
        A[1] -= B[0];
        B[1] -= A[0];
    }

    if(A[1] <= 0 && B[1] <= 0) cout << "DRAW";
    else if(A[1] <= 0) cout << "PLAYER B";
    else if(B[1] <= 0) cout << "PLAYER A";

    return 0;
}
