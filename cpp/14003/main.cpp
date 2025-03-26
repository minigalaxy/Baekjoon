#include <iostream>

using namespace std;

int N;

int A[1000001] = { 0, }, tmp[1000001] = { -1000000001, }, lis[1000001];

int res = 0;

int main()
{
    cin >> N;

    for(int i = 0; i < N; i++) cin >> A[i];

    int s = 0;

    for(int i = 0; i < N; i++){
        if(A[i] > tmp[s]){
            tmp[++s] = A[i];

            if(s > res){
                res = s;

                for(int j = 1; j <= s; j++){
                    lis[j] = tmp[j];
                }
            }
        } else {
            auto it = lower_bound(tmp + 1, tmp + s + 1, A[i]);
            *it = A[i];
        }
        for(int i = 1; i <= s; i++) cout << tmp[i] << ' ';
        cout << '\n';
    }

    cout << res << '\n';



    return 0;
}
