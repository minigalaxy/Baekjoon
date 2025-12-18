#include <iostream>
#include <algorithm>

using namespace std;

int N;

int S[20'000];

int tmp[10];

int C;

int R[10];

int K = 0;

int I[20'000];

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++) cin >> S[i];
    
    cin >> C;
    
    for(int i = 0; i < C; i++) cin >> R[i];
    
    sort(R, R + C);
    
    for(int i = 0; i < N - C + 1; i++){
        for(int j = 0; j < C; j++) tmp[j] = S[i + j];
        
        sort(tmp, tmp + C);
        
        bool flag = true;
        
        for(int j = 1; j < C && flag; j++){
            if(tmp[j] - tmp[0] != R[j] - R[0]) flag = false;
        }
        
        if(flag) I[K++] = i + 1;
    }
    
    cout << K << '\n';
    
    for(int i = 0; i < K; i++) cout << I[i] << '\n';
    
    return 0;
}
