#include <iostream>
#include <string>

using namespace std;

string A, B;

bool A_neg = false, B_neg = false, res_neg = false;

int res[10002] = { 0, };

int main()
{
    cin >> A >> B;

    if(A[0] == '-'){
        A.erase(0, 1);
        A_neg = true;
    }
    if(B[0] == '-'){
        B.erase(0, 1);
        B_neg = true;
    }

    int tmp = 0;

    while(tmp < A.size() || tmp < B.size()){
        if(tmp < A.size()){
            if(A_neg) res[tmp] -= A[A.size() - tmp - 1] - '0';
            else res[tmp] += A[A.size() - tmp - 1] - '0';
        }
        if(tmp < B.size()){
            if(B_neg) res[tmp] -= B[B.size() - tmp - 1] - '0';
            else res[tmp] += B[B.size() - tmp - 1] - '0';
        }

        if(abs(res[tmp]) >= 10){
            res[tmp + 1] += res[tmp] / 10;
            res[tmp] %= 10;
        }

        tmp++;
    }

    while(tmp >= 0 && res[tmp] == 0) tmp--;

    if(res[tmp] < 0){
        res_neg = true;

        for(int i = 0; i <= tmp; i++) res[i] *= -1;
    }

    for(int i = 0; i < tmp; i++){
        if(res[i] < 0){
            res[i + 1]--;
            res[i] += 10;
        }
    }

    while(tmp >= 0 && res[tmp] == 0) tmp--;

    if(res_neg) cout << '-';

    for(int i = tmp; i > -1; i--) cout << res[i];

    if(tmp == -1) cout << 0;

    return 0;
}
