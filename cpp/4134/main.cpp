#include <iostream>

using namespace std;

int T;

long long n;

int main()
{
    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> n;

        if(n < 2){
            cout << 2 << '\n';
            continue;
        }

        while(true){
            bool f = false;

            for(long long j = 2;  j * j <= n; j++){
                if(n % j == 0){
                    f = true;
                    break;
                }
            }

            if(!f){
                cout << n << '\n';
                break;
            }

            n++;
        }
    }

    return 0;
}
