#include <iostream>

using namespace std;

int n;

int t;

bool e[2];

int main()
{
    cin >> n;
    
    for(int i = 0; i < n; i++){
        e[0] = false;
        e[1] = false;
        
        for(int j = 0; j < 10; j++){
            cin >> t;
            
            cout << t << ' ';
            
            if(t == 17) e[0] = true;
            else if(t == 18) e[1] = true;
        }
        
        if(e[0] && e[1]) cout << "both\n\n";
        else if(e[0]) cout << "zack\n\n";
        else if(e[1]) cout << "mack\n\n";
        else cout << "none\n\n";
    }
    
    return 0;
}
