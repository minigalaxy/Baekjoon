#include <iostream>

using namespace std;

int N;

int tmp = 1;

int main()
{
    cin >> N;

    for(int i = 0; i < N; i++) tmp *= 2;

    cout << tmp;

    return 0;
}
