#include <iostream>

using namespace std;

int n;

int res;

bool prime[246913] = { false, };

int main()
{
    fill(prime + 2, prime + 246913, true);

    while(true){
        res = 0;

        cin >> n;

        if(n == 0) break;

        for(int i = 2, j; i * i <= 2 * n; i++){
            j = max(2, n / i);

            while(i * j <= 2 * n){
                prime[i * j] = false;
                j++;
            }
        }

        for(int i = n + 1; i <= 2 * n; i++){
            if(prime[i]) res++;
        }

        cout << res << '\n';
    }
    return 0;
}
