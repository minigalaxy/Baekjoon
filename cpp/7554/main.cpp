#include <iostream>
#include <algorithm>

using namespace std;

int T;

int N;

int S[1000];

int main()
{
    cin >> T;
    
    for(int i = 0; i < T; i++){
        cin >> N;
        
        int res = 0;
        
        for(int j = 0; j < N; j++) cin >> S[j];
       
        for(int j = 0; j < N; j++){
            for(int k = 0; k < N - 1; k++){
                if(S[k] > S[k + 1]){
                    swap(S[k], S[k + 1]);
                    res++;
                }
            }
        }
        
        cout << "Scenario #" << i + 1 << ":\n" << res << "\n\n";
    }
    
    return 0;
}
