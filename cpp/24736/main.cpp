#include <iostream>

using namespace std;

int T, F, S, P, C;

int main()
{
    for(int i = 0; i < 2; i++){
        cin >> T >> F >> S >> P >> C;

        cout << T * 6 + F * 3 + S * 2 + P + C * 2 << '\n';
    }
    return 0;
}
