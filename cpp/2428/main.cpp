#include <iostream>
#include <algorithm>

using namespace std;

int N;

int F[100'000];

long long res = 0;

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++) cin >> F[i];
    
    sort(F, F + N);
    
    for(int i = 1; i < N; i++){
        int l = 0, r = i;
        
        while(l < r){
            int m = (l + r) / 2;
            
            if(F[m] >= 0.9 * F[i]) r = m;
            else l = m + 1;
        }
        
        res += i - l;
    }
    
    cout << res;
    
    return 0;
}
