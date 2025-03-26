#include <iostream>

using namespace std;

int N, K;

int temp[100001];

int psum[100001] = { 0, };

int res = -10000000;

int main()
{
    cin >> N >> K;

    for(int i = 1; i <= N; i++){
        cin >> temp[i];
        psum[i] = psum[i - 1] + temp[i];
    }

    for(int i = K; i <= N; i++){
        res = max(res, psum[i] - psum[i - K]);
    }

    cout << res;

    return 0;
}
