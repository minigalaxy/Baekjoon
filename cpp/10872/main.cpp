#include <iostream>

using namespace std;

int N;

int main()
{
    cin >> N;

    int res = 1;

    for(int i = 2; i <= N; i++) res *= i;

    cout << res;

    return 0;
}
