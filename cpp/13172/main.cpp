#include <iostream>

using namespace std;

int M;

int N, S;

int res = 0;

int X = 1000000007;

int gcd(int x, int y){
    int tmp;

    while(x){
        tmp = x;
        x = y % x;
        y = tmp;
    }

    return y;
}

int main()
{
    cin >> M;

    for(int i = 0; i < M; i++){
        cin >> N >> S;

        int t = gcd(N, S);

        N /= t;
        S /= t;

        if(N == 1){
            res = (res + S) % X;
        } else {
            long long tmp = N, b = 1;

            int x = X - 2;

            while(x){
                if(x % 2 == 1) b = (b * tmp) % X;
                tmp = (tmp * tmp) % X;

                x /= 2;
            }

            res = (res + (S * b) % X) % X;
        }
    }

    cout << res;

    return 0;
}
