#include <iostream>

using namespace std;

int N;

long long A[500'000], B[500'000];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N;

    for(int i = 0; i < N; i++) cin >> A[i];
    for(int i = 0; i < N; i++) cin >> B[i];

    for(int i = 0; i < N; i++){
        int l = i, r = N - 1;

        while(l < r){
            int m = (l + r) / 2 + 1;

            if(B[m] <= A[i]) l = m;
            else r = m - 1;
        }

        cout << r - i << ' ';
    }

    return 0;
}
