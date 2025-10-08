#include <iostream>

using namespace std;

int N, K, A, B;

int main()
{
    cin >> N >> K >> A >> B;

    int t = 0, i = 0;

    while(K > 0){
        t += A;

        if(t == N){
            K += B;
            t = 0;
        }

        K--;

        i++;
    }

    cout << i;

    return 0;
}
