#include <iostream>

using namespace std;

int N, M;

short n[100000];

int i, j;

int ps[100000], res[100000];

int main()
{
    cin >> N >> M;

    for(int k = 0; k < N; k++) cin >> n[k];

    ps[0] = n[0];
    for(int k = 1; k < N; k++) ps[k] = ps[k - 1] + n[k];

    for(int k = 0; k < M; k++){
        cin >> i >> j;

        res[k] = ps[j - 1] - ps[i - 1] + n[i - 1];
    }

    for(int k = 0; k < M; k++) cout << res[k] << '\n';

    return 0;
}
