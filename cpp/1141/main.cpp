#include <iostream>
#include <algorithm>

using namespace std;

int N;

string S[50];

int res;

int main()
{
    cin >> N;
    
    res = N;
    
    for(int i = 0; i < N; i++) cin >> S[i];
    
    sort(S, S + N);
    
    for(int i = 0; i < N; i++){
        if(S[i + 1].find(S[i]) == 0) res--;
    }
    
    cout << res;
    
    return 0;
}
