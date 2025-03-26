#include <iostream>

using namespace std;

int N, K;
int r = 1;

int main()
{
    cin >> N >> K;

    for(int i = N; i > N - K; i--) r *= i;
    for(int i = K; i > 0; i--) r /= i;

    cout << r;

    return 0;
}
