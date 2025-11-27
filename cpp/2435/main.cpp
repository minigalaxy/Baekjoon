#include <iostream>

using namespace std;

int N, K;

int S[100];

int res;

int main()
{
    cin >> N >> K;
    
    cin >> S[0];
    
    for(int i = 1; i < N; i++){
        cin >> S[i];
        S[i] += S[i - 1];
    }
    
    res = S[K - 1];
    
    for(int i = 1; i < N - K + 1; i++){
        res = max(res, S[i + K - 1] - S[i - 1]);
    }
    
    cout << res;
    
    return 0;
}
