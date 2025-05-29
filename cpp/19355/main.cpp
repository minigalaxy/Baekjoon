#include <iostream>
#include <algorithm>

using namespace std;

int z;

int n;

long long a[1'000'000], m[1'000'000];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> z;
    
    for(int i = 0; i < z; i++){
        cin >> n;
        
        for(int j = 0; j < n; j++) cin >> a[j];
        
        long long res = -1'000'000'000, t;
        
        res = max(res, t = a[0]);
        
        for(int j = 2; j < n; j += 2) res = max(res, t = max(a[j], a[j] + a[j - 1] + t));
        
        t = a[1];
        
        if(n > 1) res = max(res, t);
        
        for(int j = 3; j < n; j += 2) res = max(res, t = max(a[j], a[j] + a[j - 1] + t));
        
        cout << res << '\n';
    }
    
    return 0;
}
