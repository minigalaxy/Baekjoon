#include <iostream>
#include <queue>

using namespace std;

int N, K;

int A[200];

int cnt = 0, p = 0;

bool C[200] = { false, };

int main()
{
    cin >> N >> K;

    for(int i = 0; i < N * 2; i++) cin >> A[i];

    for(int res = 1; ; res++){
        if(--p < 0) p += N * 2;
        if(C[(p + N - 1) % (N * 2)]) C[(p + N - 1) % (N * 2)] = false;

        for(int i = N - 2; i >= 0; i--){
            if(C[(p + i) % (N * 2)] && !C[(p + i + 1) % (N * 2)] && A[(p + i + 1) % (N * 2)] > 0){
                C[(p + i) % (N * 2)] = false;
                C[(p + i + 1) % (N * 2)] = true;
                if(--A[(p + i + 1) % (N * 2)] == 0) cnt++;
            }
        }
        if(C[(p + N - 1) % (N * 2)]) C[(p + N - 1) % (N * 2)] = false;

        if(C[p] == 0 && A[p] > 0){
            C[p] = true;
            if(--A[p] == 0) cnt++;
        }

        if(cnt >= K){
            cout << res;

            return 0;
        }
    }

    return 0;
}
