#include <iostream>

using namespace std;

int T;

int N;

int main()
{
    cin >> T;

    for(int i = 1; i <= T; i++){
        cin >> N;

        if(N == 0){
            cout << "Case #" << i << ": INSOMNIA\n";

            continue;
        }

        int res = 0, j = 0;

        while(res != (1 << 10) - 1){
            j++;

            int t = N * j;

            while(t > 0){
                res |= (1 << (t % 10));
                t /= 10;
            }
        }

        cout << "Case #" << i << ": " << N * j << '\n';
    }

    return 0;
}
