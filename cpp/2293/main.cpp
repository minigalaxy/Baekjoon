#include <iostream>

using namespace std;

int n, k;

int v;

int m[10001] = { 1, };

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> n >> k;
    
    for(int i = 0; i < n; i++){
        cin >> v;
    
        for(int j = v; j <= k; j++){
            m[j] += m[j - v];
        }
    }
    
    cout << m[k];
    
    return 0;
}
