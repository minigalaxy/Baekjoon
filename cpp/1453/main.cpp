#include <iostream>

using namespace std;

int N;

bool c[101] = { false, };

int res = 0;

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        int t;
        cin >> t;
        
        if(c[t]) res++;
        else c[t] = true;
    }
    
    cout << res;
    
    return 0;
}
