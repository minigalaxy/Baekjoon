#include <iostream>

using namespace std;

int N, tmp = 2;

int main()
{
    cin >> N;

    for(int i = 0; i < N; i++){
        tmp += tmp - 1;
    }

    cout << tmp * tmp;

    return 0;
}
