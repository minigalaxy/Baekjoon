#include <iostream>

using namespace std;

int N;

int w;

long long r = 0, res = 0;

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> w;
        
        if(w == 1) r++;
        else r--;
        
        res += r;
    }
    
    
    cout << res;
    
    return 0;
}
