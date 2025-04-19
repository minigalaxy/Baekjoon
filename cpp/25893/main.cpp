#include <iostream>

using namespace std;

int n;

int s;

int e = 0;

int main()
{
    cin >> n;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            cin >> s;
            
            cout << s << ' ';
            
            if(s >= 10) e++;
        }
    
        if(e == 3) cout << "\ntriple-double\n\n";
        else if(e == 2) cout << "\ndouble-double\n\n";
        else if(e == 1) cout << "\ndouble\n\n";
        else cout << "\nzilch\n\n";
        
        e = 0;
    }
    
    return 0;
}
