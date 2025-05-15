#include <iostream>
#include <algorithm>

using namespace std;

int t;

int n;

string p[10000];

int main()
{
    cin >> t;
    
    for(int i = 0; i < t; i++){
        cin >> n;
        
        bool flag = true;
        
        cin >> p[0];
        
        for(int j = 1; j < n; j++) cin >> p[j];
        
        sort(p, p + n);
            
        for(int j = 1; j < n; j++){
            if(p[j].find(p[j - 1]) == 0) flag = false;
        }
        
        cout << ((flag) ? "YES\n" : "NO\n");
    }
    
    return 0;
}
