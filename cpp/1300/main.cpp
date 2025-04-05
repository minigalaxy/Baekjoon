#include <iostream>

using namespace std;

long long N, k;

long long res;

int main()
{
    cin >> N >> k;

    long long s = 1, e = N * N, m, c;

    while(s <= e){
        m = (s + e) / 2;
        c = 0;

        if(s == e) break;

        for(long long i = 1; i <= N; i++){
            c += min(N, m / i);
        }

        if(c < k) s = m + 1;
        else e = m;
    }

    cout << m;

    return 0;
}
