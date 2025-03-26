#include <iostream>

using namespace std;

int N;

int main()
{
    cin >> N;

    cout << N - N * 22 / 100 << ' ' << N - N / 5 * 22 / 100;

    return 0;
}
