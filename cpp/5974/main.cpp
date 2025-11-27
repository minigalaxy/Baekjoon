#include <iostream>

using namespace std;

int L, C, N;

int S[512], P[512];

int main()
{
    cin >> L >> C >> N;
    
    for(int i = 0; i < C; i++) cin >> S[i] >> P[i];
    
    for(int i = 0; i < C; i++){
        cout << abs(N - P[i]) + S[i] << '\n';
    }
    
    return 0;
}
