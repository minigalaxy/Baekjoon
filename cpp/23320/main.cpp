#include <iostream>
#include <algorithm>

using namespace std;

int N;

int A[100];

int X, Y;

int main()
{
    cin >> N;

    for(int i = 0; i < N; i++) cin >> A[i];

    cin >> X >> Y;

    sort(A, A + N);

    cout << N * X / 100 << ' ';

    for(int i = 0; i < N; i++){
        if(A[i] >= Y){
            cout << N - i;
            return 0;
        }
    }

    cout << 0;

    return 0;
}
