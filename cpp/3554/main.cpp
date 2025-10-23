#include <iostream>

using namespace std;

int n;

int a[50'000];

int m;

int k, l, r;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n;
    
    for(int i = 0; i < n; i++) cin >> a[i];
    
    cin >> m;
    
    for(int i = 0; i < m; i++){
        cin >> k >> l >> r;
        
        if(k == 1){
            for(int j = l - 1; j < r; j++){
                a[j] = (a[j] * a[j]) % 2010;
            }
        } else {
            int sum = 0;
            
            for(int j = l - 1; j < r; j++){
                sum += a[j];
            }
            
            cout << sum << '\n';
        }
    }
    
    return 0;
}
