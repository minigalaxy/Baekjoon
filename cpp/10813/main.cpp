#include <iostream>
#include <algorithm>

using namespace std;

int N, M;
int i, j;

int basket[100];

int main()
{
    cin >> N >> M;

    for(int k = 0; k < N; k++) basket[k] = k + 1;

    for(int k = 0; k < M; k++){
        cin >> i >> j;

        swap(basket[i - 1], basket[j - 1]);
    }

    for(int k = 0; k < N; k++) cout << basket[k] << ' ';

    return 0;
}
