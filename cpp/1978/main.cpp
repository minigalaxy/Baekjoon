#include <iostream>

using namespace std;

int N;

int r;

int main()
{
    cin >> N;

    r = N;

    for(int i = 0; i < N; i++){
        int t;
        cin >> t;

        if(t == 1){
            r--;
            continue;
        }

        for(int n = 2; n <= t / 2; n++){
            if(t % n == 0){
                r--;
                break;
            }
        }
    }

    cout << r;

    return 0;
}
