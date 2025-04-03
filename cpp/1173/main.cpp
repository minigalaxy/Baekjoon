#include <iostream>

using namespace std;

int N, m, M, T, R;

int X;

int res = 0;

int main()
{
    cin >> N >> m >> M >> T >> R;
    
    X = m;
    
    if(m + T <= M){
        while(N > 0){
            if(X + T <= M){
                X += T;
                N--;
            } else {
                X = max(m, X - R);
            }
            
            res++;
        }
        
        cout << res;
    } else cout << -1;
    
    
    return 0;
}
