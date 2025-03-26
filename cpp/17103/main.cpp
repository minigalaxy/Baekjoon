#include <iostream>

using namespace std;

int T;

int N;

bool prime[1000001] = { false, };

int res;

int main()
{
    fill(prime + 2, prime + 1000001, true);

    for(int i = 2; i * i <= 1000000; i++){
        for(int j = 2; i * j <= 1000000; j++){
            prime[i * j] = false;
        }
    }

    cin >> T;

    for(int i = 0; i < T; i++){
        res = 0;

        cin >> N;

        for(int j = 2; j <= N / 2; j++){
            if(prime[j] && prime[N - j]) res++;
        }

        cout << res << '\n';
    }

    return 0;
}
