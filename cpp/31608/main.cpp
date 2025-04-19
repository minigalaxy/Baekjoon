#include <iostream>

using namespace std;

int N;

string S, T;

int res = 0;

int main()
{
    cin >> N >> S >> T;
    
    for(int i = 0; i < N; i++){
        if(S[i] != T[i]) res++;
    }
    
    cout << res;
    
    return 0;
}
