#include <iostream>

using namespace std;

int N, a, b;

int main()
{
    cin >> N >> a >> b;

    for(int i = 2, r = 1; i < N * 2; i = (i << 1)){
        for(int j = 1; j < N; j += i){
            if(j <= a && a < j + i && j <= b && b < j + i){
                cout << r;

                return 0;
            }
        }

        r++;
    }

    cout << -1;

    return 0;
}
