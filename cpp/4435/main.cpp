#include <iostream>

using namespace std;

int T;

int g, s;
int gs[6] = { 1, 2, 3, 3, 4, 10 }, ss[7] = { 1, 2, 2, 2, 3, 5, 10 };

int main()
{
    cin >> T;
    
    for(int i = 0; i < T; i++){
        int res = 0;
            
        for(int j = 0; j < 6; j++){
            cin >> g;
            res += gs[j] * g;
        }
        for(int j = 0; j < 7; j++){
            cin >> s;
            res -= ss[j] * s;
        }
        
        cout << "Battle " << i + 1 << ": ";
        
        if(res > 0) cout << "Good triumphs over Evil";
        else if(res < 0) cout << "Evil eradicates all trace of Good";
        else cout << "No victor on this battle field";
        
        cout << '\n';
    }
    
    return 0;
}
