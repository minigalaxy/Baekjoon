#include <iostream>

using namespace std;

int N, Q;

int h[100000];

int mem[100000][100000];

int solve(int l, int r){
    if(l == r) return h[l];
    
    int m = (l + r) / 2;
    
    if(mem[l][r] == -1) mem[l][r] = min(solve(l, m), solve(m + 1, r));
    
    return mem[l][r];
}

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++) cin >> h[i];
    
    cin >> Q;
    
    for(int i = 0; i < Q; i++){
        int l, r, w;
    }

    return 0;
}

//³ë´ä
