#include <iostream>
#include <algorithm>

using namespace std;

int N;

int S[1'000'000];

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++) cin >> S[i];
    
    sort(S, S + N, greater<>());
    
    for(int i = 0; i < N - 2; i++){
        for(int j = i + 2; j < N; j++){
            if(S[i] < S[i + 1] + S[j]){
                cout << S[i] + S[i + 1] + S[j];
                
                return 0;
            }
        }
        
    }
    
    cout << -1;
    
    return 0;
}
