#include <iostream>

using namespace std;

int N;

long long B;

int A[5][5], res[5][5] = { 0, };

void multiply(int A[5][5], int B[5][5]){
    int C[5][5] = { 0, };

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            for(int k = 0; k < N; k++){
                C[i][j] = (C[i][j] + A[i][k] * B[k][j]) % 1000;
            }
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++) A[i][j] = C[i][j];
    }
}

int main()
{
    cin >> N >> B;

    int tmp[5][5];

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> A[i][j];
            tmp[i][j] = A[i][j];
        }
    }

    for(int i = 0; i < N; i++) res[i][i] = 1;

    while(B > 0){
        if(B % 2 == 1) multiply(res, tmp);

        multiply(tmp, tmp);
        B /= 2;
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++) cout << res[i][j] << ' ';
        cout << '\n';
    }

    return 0;
}
