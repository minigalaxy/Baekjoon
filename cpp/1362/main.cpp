#include <iostream>

using namespace std;

int o, w;

char c;
int n;

int i = 1;

int main()
{
    while(true){
        cin >> o >> w;
        
        if(o == 0 && w == 0) break;
    
        while(true){
            cin >> c >> n;
            
            if(c == '#') break;
            
            if(w > 0){
                if(c == 'E') w -= n;
                else w += n;
            }
            
        }
        
        cout << i++ << ' ';
        
        if(w <= 0) cout << "RIP\n";
        else if(w > o / 2 && w < o * 2) cout << ":-)\n";
        else cout << ":-(\n";
    }
    
    return 0;
}
