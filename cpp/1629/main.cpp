#include <iostream>

using namespace std;

int A, B, C;

int main()
{
    cin >> A >> B >> C;

    int res = 1;

    long long tmp = A % C;

    while(B){
        if(B % 2) res = (res * tmp) % C;

        B /= 2;

        tmp = (tmp * tmp) % C;
    }

    cout << res;

    return 0;
}
