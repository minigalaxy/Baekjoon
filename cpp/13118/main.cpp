#include <iostream>

using namespace std;

int p[4];

int x, y, r;

int main()
{
    for(int i = 0; i < 4; i++) cin >> p[i];
    
    cin >> x >> y >> r;
    
    for(int i = 0; i < 4; i++){
        if(p[i] == x){
            cout << i + 1;
            
            return 0;
        }
    }
    
    cout << 0;
    
    return 0;
}
