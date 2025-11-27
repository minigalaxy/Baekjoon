#include <iostream>

using namespace std;

int N, S, P;

int R[50] = { 0, };

int main()
{
    cin >> N >> S >> P;

    for(int i = 0; i < N; i++) cin >> R[i];

    if(N == 0) cout << 1;
    else {
        if(P > N){
            for(int i = 0; i < N + 1; i++){
                if(S >= R[i]){
                    cout << i + 1;
                    break;
                }
            }
        } else {
            if(S <= R[N - 1]) cout << -1;
            else {
                for(int i = 0; i < N; i++){
                    if(S >= R[i]){
                        cout << i + 1;
                        break;
                    }
                }
            }
        }
    }

    return 0;
}
