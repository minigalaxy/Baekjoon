#include <iostream>

using namespace std;

int N, T;

int K;

int S, E;

int schd[1000] = { 0, };

int res[2], sum = 0;

int main()
{
    cin >> N >> T;
    
    for(int i = 0; i < N; i++){
        cin >> K;
        
        for(int j = 0; j < K; j++){
            cin >> S >> E;
            
            for(int k = S; k < E; k++) schd[k]++;
        }
    }
    
    for(int i = 0; i < T; i++) sum += schd[i];
    
    res[0] = 0;
    res[1] = sum;
    
    for(int i = 0; i < 1000 - T; i++){
        sum -= schd[i];
        sum += schd[i + T];
        
        if(sum > res[1]){
            res[0] = i + 1;
            res[1] = sum;
        }
    }
    
    cout << res[0] << ' ' << res[0] + T;
    
    return 0;
}
