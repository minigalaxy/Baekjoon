#include <iostream>
#include <algorithm>

using namespace std;

int N, L;

int P[1'000];

int res = 0;

int main()
{
    cin >> N >> L;
    
    for(int i = 0; i < N; i++) cin >> P[i];
    
    sort(P, P + N);
    
    for(int i = 0; i < N; i++){
        res++;
        
        int j = i;
        
        while(j + 1 < N && P[j + 1] - P[i] < L) j++;
        
        i = j;
    }
    
    cout << res;
    
    return 0;
}
