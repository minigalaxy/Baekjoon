#include <iostream>

using namespace std;

int X, N;

int a, b;

int sum = 0;

int main()
{
    cin >> X >> N;

    for(int i = 0; i < N; i++){
        cin >> a >> b;

        sum += a * b;
    }

    cout << ((X == sum) ? "Yes" : "No");

    return 0;
}
