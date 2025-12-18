#include <iostream>

using namespace std;

int N;

int D[10'000], C[10'000];

int res = 0;

int main()
{
    cin >> N;

    for(int i = 0; i < N; i++) cin >> D[i] >> C[i];

    for(int i = 0; i < N; i++){
        bool flag = true;

        for(int j = 0; j < N && flag; j++){
            if(j != i){
                if(D[j] < D[i] && C[j] <= C[i]) flag = false;
                if(C[j] < C[i] && D[j] <= D[i]) flag = false;
            }
        }

        if(flag) res++;
    }

    cout << res;

    return 0;
}
