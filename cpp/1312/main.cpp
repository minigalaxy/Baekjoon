#include <iostream>

using namespace std;

int A, B, N;

int main()
{
    cin >> A >> B >> N;

    for(int i = 0; i < N; i++){
        A %= B;
        A *= 10;
    }

    cout << A / B;

    return 0;
}
