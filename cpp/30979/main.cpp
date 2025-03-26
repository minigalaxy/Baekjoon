#include <iostream>

int T;

int N;

int F;

using namespace std;

int main()
{
    cin >> T >> N;

    for(int i = 0; i < N; i++){
        cin >> F;

        T -= F;
    }

    cout << ((T <= 0) ? "Padaeng_i Happy" : "Padaeng_i Cry");

    return 0;
}
