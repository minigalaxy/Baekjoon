#include <iostream>

using namespace std;

int eval = 0;

int A[10], B[10];

int main()
{
    for(int i = 0; i < 10; i++) cin >> A[i];
    for(int i = 0; i < 10; i++) cin >> B[i];

    for(int i = 0; i < 10; i++){
        if(A[i] > B[i]) eval++;
        else if(A[i] < B[i]) eval--;
    }

    if(eval > 0) cout << 'A';
    else if(eval < 0) cout << 'B';
    else cout << 'D';

    return 0;
}
