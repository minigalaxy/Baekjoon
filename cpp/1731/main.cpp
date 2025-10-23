#include <iostream>

using namespace std;

int N;

int S[50];

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++) cin >> S[i];
    
    if(S[2] - S[1] == S[1] - S[0]) cout << S[N - 1] + S[1] - S[0];
    else cout << S[N - 1] * (S[1] / S[0]);
    
    return 0;
}
