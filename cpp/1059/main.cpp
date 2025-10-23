#include <iostream>
#include <algorithm>

using namespace std;

int L;

int S[51] = { 0, };

int n;

int res = 0;

int main()
{
    cin >> L;
    
    for(int i = 1; i < L + 1; i++) cin >> S[i];
    
    sort(S, S + L + 1);
    
    cin >> n;
    
    int idx = lower_bound(S, S + L + 1, n) - S - 1;
    
    if(n == S[idx] || n == S[idx + 1]) cout << 0;
    else cout << (n - S[idx] - 1) * (S[idx + 1] - n - 1) + S[idx + 1] - S[idx] - 2;
    
    return 0;
}
