#include <iostream>

using namespace std;

int N, C;

int w[1'000];

int res = 0;

int main()
{
    cin >> N >> C;
    
    for(int i = 0; i < N; i++) cin >> w[i];
    
    for(int i = 0; i < N; i++){
        int c = 0, l = 0;
        
        for(int j = i; j < N; j++){
            if(c + w[j] <= C){
                c += w[j];
                l++;
            }
        }
        
        res = max(res, l);
    }
    
    cout << res;
    
    return 0;
}
