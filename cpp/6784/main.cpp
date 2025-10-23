#include <iostream>

using namespace std;

int N;

char r[10000], c[10000];

int res = 0;

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++) cin >> r[i];
    
    for(int i = 0; i < N; i++) cin >> c[i];
    
    for(int i = 0; i < N; i++) if(r[i] == c[i]) res++;
    
    cout << res;
    
    return 0;
}
