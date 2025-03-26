#include <iostream>

using namespace std;

int T;

int A, B;

int main()
{
    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> A >> B;

        int lcm = A * B;

        while(B){
            int tmp = B;
            B = A % B;
            A = tmp;
        }

        lcm /= A;

        cout << lcm << '\n';
    }

    return 0;
}
