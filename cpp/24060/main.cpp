#include <iostream>

using namespace std;

int N, K;

int A[500000], tmp[500000];
int res = -1;

void merge(int p, int q, int r){
    int i = p, j = q + 1, t = 0;

    while(i <= q && j <= r){
        if(A[i] <= A[j]) tmp[t++] = A[i++];
        else tmp[t++] = A[j++];
    }
    while(i <= q) tmp[t++] = A[i++];
    while(j <= r) tmp[t++] = A[j++];

    i = p;
    t = 0;

    while(i <= r){
        A[i] = tmp[t];

        if(--K == 0) res = A[i];

        i++;
        t++;
    }
}

void merge_sort(int p, int r){
    if(p < r){
        int q = (p + r) / 2;

        merge_sort(p, q);
        merge_sort(q + 1, r);
        merge(p, q, r);
    }
}

int main()
{
    cin >> N >> K;

    for(int i = 0; i < N; i++) cin >> A[i];

    merge_sort(0, N - 1);

    cout << res;

    return 0;
}
