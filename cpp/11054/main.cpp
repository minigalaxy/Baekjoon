#include <iostream>
#include <algorithm>

using namespace std;

int A[1000], N;

int asc[1000], desc[1000];

int res = 1;

int main()
{
    cin >> N;

    for(int i = 0; i < N; i++) cin >> A[i];

    fill(asc, asc + 1000, 1);
    fill(desc, desc + 1000, 1);

    for(int i = 0; i < N; i++){
        for(int j = i + 1; j < N; j++){
            if(A[j] > A[i]) asc[j] = max(asc[j], asc[i] + 1);
        }
    }

    for(int i = N - 1; i > -1; i--){
        for(int j = i - 1; j > -1; j--){
            if(A[j] > A[i]) desc[j] = max(desc[j], desc[i] + 1);;
        }
    }

    for(int i = 0; i < N; i++){
        if(asc[i] + desc[i] > res) res = asc[i] + desc[i];
    }

    cout << res - 1;

    return 0;
}
