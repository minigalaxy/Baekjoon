#include <iostream>

using namespace std;

int N, L, D;

int t;

int main()
{
    cin >> N >> L >> D;
    
    t = L;
    N--;
    
    while(N > 0){
        for(int i = 0; i < 5; i++){
            if(t % D == 0){
                cout << t;
                
                return 0;
            }
            
            t++;
        }
        
        t += L;
        N--;
    }
    
    while(true){
        if(t % D == 0){
            cout << t;
            
            return 0;
        }
        
        t++;
    }
    
    return 0;
}
