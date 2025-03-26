#include <iostream>
#include <queue>

using namespace std;

int N;

int A[100];

int M;

int B[100];

int K = 0;
int res[100];
int idx[100];

int chk(int start, int value){
    for(int i = start; i < M; i++){
        if(value == B[i]) return i;
    }
    return -1;
}

int main()
{
    cin >> N;

    for(int i = 0; i < N; i++) cin >> A[i];

    cin >> M;

    for(int i = 0; i < M; i++) cin >> B[i];

    for(int i = 0, tmp = 0; i < N; i++){
        int K2 = K, tmp2 = tmp;

        for(int j = K; j > 0; j--){
            if(A[i] > res[j - 1]){
                tmp = idx[j - 1];
                K--;
            } else break;
        }

        int c = chk(tmp, A[i]);

        //cout << tmp << ' ' << tmp2 << ' ' << K << ' ' << A[i] << ' ' << c << '\n';

        if(c > -1){
            res[K] = A[i];
            idx[K++] = tmp;
            tmp = c + 1;
        } else {
            K = K2;
            tmp = tmp2;
        }
    }

    cout << K << '\n';

    if(K > 0){
        for(int i = 0; i < K; i++) cout << res[i] << ' ';
    }

    return 0;
}
