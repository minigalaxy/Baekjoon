#include <iostream>

using namespace std;

int N, C;

int cycle[100];

bool b[2'000'001] = { false, };

int res = 0;

int main()
{
    cin >> N >> C;
    
    for(int i = 0; i < N; i++) cin >> cycle[i];
    
    for(int i = 0; i < N; i++){
        for(int j = cycle[i]; j <= C; j += cycle[i]){
            b[j] = true;
        }
    }
    
    for(int i = 1; i <= C; i++){
        if(b[i]) res++;
    }
    
    cout << res;
    
    return 0;
}
