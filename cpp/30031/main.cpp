#include <iostream>

using namespace std;

int N;

int w, h;

int res = 0;

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> w >> h;
        
        if(w == 136) res += 1000;
        else if(w == 142) res += 5000;
        else if(w == 148) res += 10000;
        else res += 50000;
    }
    
    cout << res;
    
    return 0;
}
