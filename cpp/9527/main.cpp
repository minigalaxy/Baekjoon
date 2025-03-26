#include <iostream>

using namespace std;

long long A, B;

long long d[54];

long long sum(long long n){
    long long res = n & 1;

    for(int i = 54; i > 0; i--){
        if(n & (1LL << i)){
            res += d[i - 1] + (n - (1LL << i) + 1);
            n -= 1LL << i;
        }
    }

    return res;
}

int main()
{
    cin >> A >> B;

    d[0] = 1;

    for(int i = 1; i < 54; i++){
        d[i] = 2 * d[i - 1] + (1LL << i);
    }

    cout << sum(B) - sum(A - 1);

    return 0;
}
