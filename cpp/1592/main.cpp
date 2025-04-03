#include <iostream>

using namespace std;

int N, M, L;

int c = 0;

int cnt[50] = { 0, };

int res = 0;

int main()
{
    cin >> N >> M >> L;
    
    while(true){
        if(++cnt[c] >= M) break;
    
        if(cnt[c] % 2 == 1) c = (c + L) % N;
        else c = (c - L + N) % N;
        
        res++;
    }
    
    cout << res;
    
    return 0;
}
