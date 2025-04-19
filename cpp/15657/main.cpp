#include <iostream>
#include <algorithm>

using namespace std;

int N, M;

int n[8];

int res[8];

void bt(int p, int c){
    if(c == M){
        for(int i = 0; i < M; i++) cout << n[res[i]] << ' ';
        cout << '\n';
        
        return;
    }
    
    for(int i = p; i < N; i++){
        res[c] = i;
        
        bt(i, c + 1);
    }
}

int main()
{
    cin >> N >> M;
    
    for(int i = 0; i < N; i++) cin >> n[i];
    
    sort(n, n + N);
    
    bt(0, 0);
    
    return 0;
}
