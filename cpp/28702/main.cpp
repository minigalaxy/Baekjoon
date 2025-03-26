#include <iostream>

using namespace std;

char A[9], B[9], C[9];
int r;

int main()
{
    cin >> A >> B >> C;

    if(atoi(A) > 0) r = atoi(A) + 3;
    else if(atoi(B) > 0) r = atoi(B) + 2;
    else r = atoi(C) + 1;

    if(r % 3 == 0 && r % 5 == 0) cout << "FizzBuzz";
    else if(r % 3 == 0) cout << "Fizz";
    else if(r % 5 == 0) cout << "Buzz";
    else cout << r;

    return 0;
}
