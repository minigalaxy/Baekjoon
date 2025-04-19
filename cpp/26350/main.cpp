#include <iostream>

using namespace std;

int n;

int d;

int c;

bool f;

int main()
{
    cin >> n;
    
    for(int i = 0; i < n; i++){
        f = true;
            
        cin >> d;
        
        cout << "Denominations: ";
        
        cin >> c;
        
        cout << c << ' ';
        
        for(int j = 1; j < d; j++){
            int t;
            cin >> t;
            
            cout << t << ' ';
            
            if(t < c * 2) f = false;
    
            c = t;
        }
        
        if(f) cout << "\nGood coin denominations!\n\n";
        else cout << "\nBad coin denominations!\n\n";
    }
    
    return 0;
}
