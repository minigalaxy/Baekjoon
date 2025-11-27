#include <iostream>

using namespace std;

int N, K;

int S[1000];

int res = 0;

int main()
{
    cin >> N >> K;
    
    for(int i = 0; i < N; i++) cin >> S[i];
    
    for(int i = 0; i < N - 1; i++){
        for(int j = i + 1; j < N; j++){
            if(S[i] + S[j] == K) res++;
        }
    }
    
    cout << res;
    
    return 0;
}
