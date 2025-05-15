#include <iostream>

using namespace std;

int N;

int h[100000];

int res = 0;

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++) cin >> h[i];
    
    for(int i = N - 1, p = 0; i > -1; i--){
        if(h[i] > p){
            p = h[i];
            res++;
        }
    }
    
    cout << res;
    
    return 0;
}
