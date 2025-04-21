#include <iostream>
#include <algorithm>

using namespace std;

int N;

int m[300000];

int bm[300000] = { 1, };

const long long R = 1000000007;

long long res = 0;

int main()
{
    for(int i = 1; i < 300000; i++){
        bm[i] = (bm[i - 1] * 2LL) % R;
    }
    
    cin >> N;
    
    for(int i = 0; i < N; i++) cin >> m[i];
    
    sort(m, m + N);
    
    for(int i = 0; i < N; i++){
        int l = i, r = N - 1 - i;
        
        res += 1LL * m[i] * bm[l] - 1LL * m[i] * bm[r];
        res %= R;
    }
    
    cout << res;
    
    return 0;
}
