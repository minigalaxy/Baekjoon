#include <iostream>

using namespace std;

int T;

int N, X, P[1'000];

int main()
{
    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> N >> X;

        for(int j = 0; j < X; j++) cin >> P[j];

        int stk = 0;

        for(int j = 0; j < X - 1; j++){
            if(P[j + 1] == P[j] + 1) stk++;
            else P[j + 1]
        }
    }

    return 0;
}
