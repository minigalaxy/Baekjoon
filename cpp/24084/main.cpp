#include <iostream>

using namespace std;

int N;

string S;

int main()
{
    cin >> N >> S;
    
    for(int i = 1; i < N; i++){
        if(S[i] == 'J') cout << S[i - 1] << '\n';
    }
    
    return 0;
}
