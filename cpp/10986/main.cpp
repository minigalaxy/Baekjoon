#include <iostream>

using namespace std;

int N, M;

int A;
short psum = 0;

long long snum[1000] = { 1, };

long long res = 0;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> N >> M;

    for(int i = 1; i <= N; i++){
        cin >> A;

        psum = (psum + A) % M;
        snum[psum]++;
    }

    for(int i = 0; i < M; i++){
        res += snum[i] * (snum[i] - 1) / 2;
    }

    cout << res;

    return 0;
}
