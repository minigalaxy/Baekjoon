#include <iostream>

using namespace std;

int N, M;

char P[2] = { 'I', 'O' };

char S[1000001];

int res = 0;

int main()
{
    cin >> N >> M;

    cin.ignore();

    for(int i = 0; i < M; i++) S[i] = getchar();

    for(int i = 0; i < M; i++){
        if(S[i] != P[0]) continue;

        bool t = false;
        int j = i;

        while(true){
            if(S[j] != P[t]){
                if(j - i >= N * 2 + 1){
                    res += (((j - i) - (N * 2 + 1)) / 2) + 1;
                }

                i = j - 1;

                break;
            }

            t = !t;
            j++;
        }
    }

    cout << res;

    return 0;
}
