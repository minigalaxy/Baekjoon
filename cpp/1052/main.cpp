#include <iostream>

using namespace std;

int N, K;

int res = 10'000'000;

int main()
{
    cin >> N >> K;

    int t = 1;

    while(t < N) t = t << 1;

    while(K > 0){
        if(t >= N) res = min(res, t - N);
        else {
            N -= t;
            K--;
        }

        t = t >> 1;
    }

    cout << res;

    return 0;
}
