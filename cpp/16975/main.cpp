#include <iostream>

using namespace std;

int N;

long long A[100001], S[400004] = { 0, };

int M;

void add(int l, int r, int n, int i, int j, int k){
    if(l > j || r < i) return;
    if(i <= l && r <= j){
        S[n] += k;

        return;
    }

    int m = (l + r) / 2;

    add(l, m, n * 2, i, j, k);
    add(m + 1, r, n * 2 + 1, i, j, k);
}

long long inquiry(int l, int r, int n, int x){
    if(l == r){
        if(l == x) return A[x] + S[n];
        else return A[x];
    }

    int m = (l + r) / 2, ret;

    if(x <= m) ret = inquiry(l, m, n * 2, x);
    else ret = inquiry(m + 1, r, n * 2 + 1, x);

    if(l <= x && x <= r) return ret + S[n];
    else return ret;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;

    for(int i = 1; i <= N; i++) cin >> A[i];

    cin >> M;

    for(int m = 0; m < M; m++){
        int q, i, j, k, x;
        cin >> q;

        if(q == 1){
            cin >> i >> j >> k;

            add(1, N, 1, i, j, k);
        } else {
            cin >> x;

            cout << inquiry(1, N, 1, x) << '\n';
        }
    }

    return 0;
}
