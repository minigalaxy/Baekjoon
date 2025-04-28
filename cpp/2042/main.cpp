#include <iostream>

using namespace std;

int N, M, K;

int a, b;
long long c;

long long A[1000001], B[4000004];

long long init(int l, int r, int i){
    if(l == r){
        B[i] = A[l];

        return B[i];
    }

    int m = (l + r) / 2;

    B[i] = init(l, m, i * 2) + init(m + 1, r, i * 2 + 1);

    return B[i];
}

int update(int l, int r, int i, int b, long long c){
    int d;

    if(l == r){
        d = c - B[i];

        B[i] = c;

        return d;
    }

    int m = (l + r) / 2;

    if(b > m) d = update(m + 1, r, i * 2 + 1, b, c);
    else d = update(l, m, i * 2, b, c);

    B[i] += d;

    return d;
}

int inquiry(int l, int r, int i, int b, int c){
    if(l > c || r < b) return 0;

    if(l >= b && r <= c) return B[i];

    int m = (l + r) / 2;

    return inquiry(l, m, i * 2, b, c) + inquiry(m + 1, r, i * 2 + 1, b, c);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M >> K;

    for(int i = 1; i <= N; i++) cin >> A[i];

    init(1, N, 1);

    for(int i = 0; i < M + K; i++){
        cin >> a >> b >> c;

        if(a == 1) update(1, N, 1, b, c);
        else cout << inquiry(1, N, 1, b, c) << '\n';
    }

    return 0;
}
