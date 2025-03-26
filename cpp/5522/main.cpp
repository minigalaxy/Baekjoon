#include <iostream>

using namespace std;

int A, res = 0;

int main()
{
    for(int i = 0; i < 5; i++){
        cin >> A;

        res += A;
    }

    cout << res;

    return 0;
}
