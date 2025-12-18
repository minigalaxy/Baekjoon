#include <iostream>
#include <algorithm>

using namespace std;

int N, M;

int W;

int res = 0;

int main()
{
    cin >> N >> M;
    
    if(N > 0) res++;
    
    int tmp = 0;
    
    for(int i = 0; i < N; i++){
        cin >> W;
        
        if(tmp + W > M){
            res++;
            tmp = W;
        }
        else tmp += W;
    }
    
    cout << res;
    
    return 0;
}
