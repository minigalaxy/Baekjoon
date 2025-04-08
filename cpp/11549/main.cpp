#include <iostream>

using namespace std;

int T;

int A, B, C, D, E;

int res = 0;

int main()
{
    cin >> T;
    
    cin >> A >> B >> C >> D >> E;
    
    if(A == T) res++;
    if(B == T) res++;
    if(C == T) res++;
    if(D == T) res++;
    if(E == T) res++;
    
    cout << res;
    
    return 0;
}
