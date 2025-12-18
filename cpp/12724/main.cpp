#include <iostream>
#include <algorithm>

using namespace std;

int T;

int n;

long long v1[800], v2[800];

int main()
{
    cin >> T;
    
    for(int i = 0; i < T; i++){
        cin >> n;
        
        for(int j = 0; j < n; j++) cin >> v1[j];
        for(int j = 0; j < n; j++) cin >> v2[j];
        
        sort(v1, v1 + n);
        sort(v2, v2 + n, greater<>());
        
        long long res = 0;
        
        for(int j = 0; j < n; j++) res += v1[j] * v2[j];
        
        cout << "Case #" << i + 1 << ": " << res << '\n';
    }
    
    return 0;
}
