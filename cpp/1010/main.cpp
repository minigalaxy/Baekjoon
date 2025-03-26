#include <iostream>

using namespace std;

int T;

int N, M;

int tmp;

bool b[30];

int main()
{
    cin >> T;

    for(int i = 0; i < T; i++){
        tmp = 1;

        cin >> N >> M;

        for(int i = 2; i <= N; i++) b[i] = true;

        for(int i = M; i > M - N; i--){
            tmp *= i;

            for(int j = N; j > 1; j--){
                if(b[j] && tmp % j == 0){
                    b[j] = false;
                    tmp /= j;
                }
            }
        }

        cout << tmp << '\n';
    }

    return 0;
}
