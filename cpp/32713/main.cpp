#include <iostream>

using namespace std;

int N, K;

int A[5000];

int res = 0;

void solve(int i, int L, int p, int k){
    res = max(res, L);

    if(i + 1 < N){
        if(A[i + 1] != p){
            if(k < K) solve(i + 1, L, p, k + 1);
        } else solve(i + 1, L + 1, p, k);
    }
}

int main()
{
    cin >> N >> K;

    for(int i = 0; i < N; i++) cin >> A[i];

    for(int i = 0; i < N; i++) solve(i, 1, A[i], 0);

    cout << res;

    return 0;
}
