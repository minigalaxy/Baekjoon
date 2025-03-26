#include <iostream>

using namespace std;

int N, M;
int i, j, k;

int basket[100] = { 0, };

int main()
{
    cin >> N >> M;

    for(int l = 0; l < M; l++){
        cin >> i >> j >> k;

        for(int m = i; m <= j; m++) basket[m - 1] = k;
    }

    for(int l = 0; l < N; l++) cout << basket[l] << ' ';

    return 0;
}
