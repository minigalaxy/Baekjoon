#include <iostream>

using namespace std;

int S[2], E[2] , P[2];

int main()
{
    cin >> S[0] >> S[1] >> E[0] >> E[1] >> P[0] >> P[1];
    
    if(S[0] == E[0]){
        if(S[0] == P[0] && P[1] >= min(S[1], E[1]) && P[1] <= max(S[1], E[1])) cout << 2;
        else cout << 0;
    } else if(S[1] == E[1]){
        if(S[1] == P[1] && P[0] >= min(S[0], E[0]) && P[0] <= max(S[0], E[0])) cout << 2;
        else cout << 0;
    } else cout << 1;
    
    return 0;
}
