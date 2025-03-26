#include <iostream>

using namespace std;

int M, N;

int res = 0, sum = 0;

int main()
{
    cin >> M >> N;

    for(int i = max(2, M); i <= N; i++){
        bool f = false;

        for(int j = 2; j < i; j++){
            if(i % j == 0){
                f = true;
                break;
            }
        }

        if(!f){
            if(res == 0) res = i;
            sum += i;
        }
    }

    if(res > 0) cout << sum << '\n' << res;
    else cout << -1;

    return 0;
}
