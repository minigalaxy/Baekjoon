#include <iostream>

using namespace std;

int n;

int h[100000];

long long solve(int l, int r){
    if(l == r) return h[l];
    
    int m = (l + r) / 2;
    
    long long ret = max(solve(l, m), solve(m + 1, r));
    
    int tl = m, tr = m + 1, th = min(h[m], h[m + 1]);
    
    ret = max(ret, 1LL * th * (tr - tl + 1));
    
    while(l < tl && tr < r){
        if(h[tl - 1] > h[tr + 1]){
            tl--;
            th = min(th, h[tl]);
            ret = max(ret, 1LL * th * (tr - tl + 1));
        } else {
            tr++;
            th = min(th, h[tr]);
            ret = max(ret, 1LL * th * (tr - tl + 1));
        }
    }
    while(l < tl){
        tl--;
        th = min(th, h[tl]);
        ret = max(ret, 1LL * th * (tr - tl + 1));
    }
    while(tr < r){
        tr++;
        th = min(th, h[tr]);
        ret = max(ret, 1LL * th * (tr - tl + 1));
    }
    
    
    
    return ret;
}

int main()
{
    while(true){
        cin >> n;
        
        if(n == 0) break;
        
        for(int i = 0; i < n; i++) cin >> h[i];
        
        cout << solve(0, n - 1) << '\n';
    }

    return 0;
}
