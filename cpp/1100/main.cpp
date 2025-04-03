#include <iostream>

using namespace std;

int res = 0;

int main()
{
    bool r = true;
    
    for(int i = 0; i < 8; i++){
        bool c = r;
            
        for(int j = 0; j < 8; j++){
            if(getchar() == 'F' && c) res++;
            
            c = !c;
        }
        getchar();
        
        r = !r;
    }
    
    cout << res;
    
    return 0;
}
