#include <iostream>

using namespace std;

int N;
int A[100000];

uint64_t seg[400000];

int r = 0;

int M = 1000000;

int sol(int p, int s, int e){
    if(s == e){
        if(A[s] < M) M = A[s];
        return (seg[s] - seg[p] + A[p]) * M;
    }

    int m = (s + e) / 2;

    int r = sol(p, s, m);
    int l = sol(p, m + 1, e);

    return (r > l) ? r : l;
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    for(int i = 0; i < N; i++) cin >> A[i];

    seg[0] = A[0];

    for(int i = 1; i < N; i++){
        seg[i] = seg[i - 1] + A[i];
    }

    for(int i = 0; i < N; i++){
        M = 1000000;
        int t = sol(i, i, N - 1);

        if(t > r) r = t;
    }

    cout << r;

    return 0;
}
