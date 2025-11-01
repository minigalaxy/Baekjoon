#include <iostream>

using namespace std;

int N;

bool S[100];

int M;

int a, b;

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++) cin >> S[i];
    
    cin >> M;
    
    for(int i = 0; i < M; i++){
        cin >> a >> b;
        
        if(a == 1) for(int j = b - 1; j < N; j += b) S[j] = !S[j];
        else {
            int l = b - 1, r = b - 1;
            
            while(0 <= l && r < N && S[l] == S[r]){
                S[l] = !S[l];
                S[r] = S[l];
                
                l--;
                r++;
            }
        }
    }
    
    for(int i = 1; i <= N; i++){
        cout << S[i - 1] << ' ';
    
        if(i % 20 == 0) cout << '\n';
    }
    
    return 0;
}
