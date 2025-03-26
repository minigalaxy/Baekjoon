#include <iostream>

using namespace std;

int M, N, K;

int p = 1000000007;

long long fact[4000001] = { 1, 1, };

long long power(long long a, long long n){
    long long tmp = 1;

    while(n){
        if(n % 2 == 1) tmp = (tmp * a) % p;

        a = (a * a) % p;

        n /= 2;
    }

    return tmp;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> M;

    for(int i = 2; i <= 4000000; i++){
        fact[i] = (fact[i - 1] * i) % p;
    }

    for(int i = 0; i < M; i++){
        cin >> N >> K;

        cout << (fact[N] * power((fact[N - K] * fact[K]) % p, p - 2)) % p << '\n';
    }


    return 0;
}
