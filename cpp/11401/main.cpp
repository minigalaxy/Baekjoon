#include <iostream>

using namespace std;

int N, K;

int p = 1000000007;

long long power(long long a, long long n){
    long long tmp = 1;

    while(n){
        if(n % 2 == 1) tmp = (tmp * a) % p;

        a = (a * a) % p;

        n /= 2;
    }

    return tmp;
}

long long factorial(long long n){
    long long tmp = 1;

    for(int i = 2; i <= n; i++){
        tmp = (tmp * i) % p;
    }

    return tmp;
}

int main()
{
    cin >> N >> K;

    cout << (factorial(N) * power((factorial(N - K) * factorial(K)) % p, p - 2)) % p;

    return 0;
}
