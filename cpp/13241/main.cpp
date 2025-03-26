#include <iostream>

using namespace std;

long long A, B;

int main()
{
    cin >> A >> B;

    long long lcm = A * B;

    while(B){
        int tmp = B;
        B = A % B;
        A = tmp;
    }

    lcm /= A;

    cout << lcm;

    return 0;
}
