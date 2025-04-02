#include <iostream>

using namespace std;

int N;

int main()
{
    cin >> N;
    
    for(int i = N; i >= 4; i--){
        int t = i;
        bool f = true;
        
        while(t && f){
            if(t % 10 != 4 && t % 10 != 7) f = false;
            t /= 10;
        }
        
        if(f){
            cout << i;
            
            return 0;
        }
    }
    
    return 0;
}
