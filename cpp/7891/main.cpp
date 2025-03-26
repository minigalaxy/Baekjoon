#include <iostream>

using namespace std;

int t;

int A, B;

int main()
{
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> A >> B;

        cout << A + B << '\n';
    }

    return 0;
}
