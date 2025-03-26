#include <iostream>

using namespace std;

string A;

int main()
{
    cin >> A;

    for(int i = 0; i < A.size(); i++){
        A[i] -= 32;
    }

    cout << A;

    return 0;
}
