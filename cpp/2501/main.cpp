#include <iostream>

using namespace std;

int N, K;

int main()
{
    cin >> N >> K;

    for(int i = 1; i <= N; i++){
        if(N % i == 0){
            K--;

            if(K == 0){
                cout << i;
                return 0;
            }
        }
    }

    cout << 0;

    return 0;
}
