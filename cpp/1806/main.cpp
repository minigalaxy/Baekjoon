#include <iostream>

using namespace std;

int N, S;

short A[100000];

int sum[100000] = { 0, };

int res;

int main()
{
    cin >> N >> S;

    res = 100001;

    cin >> A[0];

    for(int i = 1; i < N; i++){
        cin >> A[i];
        sum[i] = sum[i - 1] + A[i];
    }

    int i = 0, j = 0;

    while(j < N){
        if(sum[j] - sum[i] + A[i] >= S){
            if(j - i + 1 < res) res = j - i + 1;

            i++;

            if(i > j) break;
        } else j++;
    }

    cout << ((res == 100001) ? 0 : res);

    return 0;
}
