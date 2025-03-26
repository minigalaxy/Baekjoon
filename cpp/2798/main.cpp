#include <iostream>

using namespace std;

int N, M;

int c[100];

int r = 0;

int main()
{
    cin >> N >> M;

    for(int i = 0; i < N; i++){
        cin >> c[i];
    }

    for(int i = 0; i < N - 2; i++){
        for(int j = i + 1; j < N - 1; j++){
            for(int k = j + 1; k < N; k++){
                    if(c[i] + c[j] + c[k] > r && c[i] + c[j] + c[k] <= M){
                        r = c[i] + c[j] + c[k];
                    }
            }
        }
    }

    cout << r;

    return 0;
}
