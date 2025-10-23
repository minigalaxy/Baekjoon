#include <iostream>
#include <algorithm>

using namespace std;

int N;

int A[10];

int res[10] = { 0, };

int main()
{
    cin >> N;

    for(int i = 0; i < N; i++) cin >> A[i];

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(A[i] == 0){
                if(res[j] == 0){
                    res[j] = i + 1;
                    break;
                }
            } else {
                if(res[j] == 0) A[i]--;
            }
        }
    }

    for(int i = 0; i < N; i++) cout << res[i] << ' ';

    return 0;
}
