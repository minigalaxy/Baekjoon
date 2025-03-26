#include <iostream>

using namespace std;

int N, r = 0;

int main()
{
    cin >> N;

    getchar();
    for(int i = 0; i < N; i++) r += getchar() - '0';

    cout << r;

    return 0;
}
