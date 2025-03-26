#include <iostream>

using namespace std;

int N;

int c[10000] = { 0, };

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    for(int i = 0; i < N; i++){
        short t;
        cin >> t;

        c[t - 1]++;
    }

    for(int i = 0; i < 10000; i++){
        if(c[i] > 0){
            for(int j = 0; j < c[i]; j++) cout << i + 1 << '\n';
        }
    }

    return 0;
}

//문제가 화나고 사장님이 불친절해요...
