#include <iostream>

using namespace std;

int N;

int main()
{
    cin >> N;

    for(int i = 1; i < N; i++){
        int n = i;
        int t = i;

        while(t){
            n += t % 10;
            t /= 10;
        }

        if(n == N){
            cout << i;

            return 0;
        }
    }

    cout << 0;

    return 0;
}
