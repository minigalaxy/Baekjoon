#include <iostream>

using namespace std;

int N, K;

int A[5000];

int visited[5000][5000] = { 0, };

int res = 0;

void solve(int i, int L, int p, int k){
    if(k > K) return;
    if(i >= N) return;
    
    res = max(res, L);
    
    if(L >= visited[i][k])
}

int main()
{
    cin >> N >> K;
    
    for(int i = 0; i < N; i++) cin >> A[i];
        
    for(int i = 0; i < N; i++) solve(N, 1, A[i], 0);
    
    cout << res;
    
    return 0;
}
