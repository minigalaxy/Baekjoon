#include <iostream>

using namespace std;

int TC;

int p, t, m;

int main()
{
    cin >> TC;
    
    for(int i = 0; i < TC; i++){
        cin >> p >> t >> m;
        
        for(int i = 0; i <= 100; i++){
            if(p * 15 + t * 20 + m * 25 + i * 40 >= 9000){
                p = -1;
                    
                cout << i << '\n';
                
                continue;
            }
        }
        
        if(p != -1) cout << "impossible\n";
    }
    
    return 0;
}
