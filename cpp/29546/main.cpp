#include <iostream>

using namespace std;

int n;

string s[1000];

int m;

int l, r;

int main()
{
    cin >> n;
    
    for(int i = 0; i < n; i++) cin >> s[i];
    
    cin >> m;
    
    for(int i = 0; i < m; i++){
        cin >> l >> r;
        
        for(int j = l - 1; j < r; j++){
            cout << s[j] << '\n';
        }
    }
    
    return 0;
}
