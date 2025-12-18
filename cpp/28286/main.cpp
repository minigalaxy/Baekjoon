#include <iostream>

using namespace std;

int N, K;

int a[20], b[20];

int solve(int c){
    if(c == 0){
        int res = 0;
        
        for(int i = 0; i < N; i++) if(a[i] == b[i]) res++;
        
        return res;
    }
    
    int ret = 0;
    
    for(int p = 0; p < N - 1; p++){
        int tmp = b[p];
    
        for(int i = p + 1; i < N; i++){
            b[i - 1] = b[i];
            b[i] = 0;
        }
            
        ret = max(ret, solve(c - 1));
        
        for(int i = N - 1; i > p; i--) b[i] = b[i - 1];
        
        b[p] = tmp;
    }
    
    for(int p = 0; p < N; p++){
        int tmp = b[N - 1];
        
        for(int i = N - 1; i > p; i--){
            b[i] = b[i - 1];
            b[i - 1] = 0;
        }
        
        ret = max(ret, solve(c - 1));
        
        for(int i = p + 1; i < N; i++) b[i - 1] = b[i];
        
        b[N - 1] = tmp;
    }
    
    return ret;
}

int main()
{
    cin >> N >> K;
    
    for(int i = 0; i < N; i++) cin >> a[i];
    for(int i = 0; i < N; i++) cin >> b[i];
    
    cout << solve(K);
    
    return 0;
}
