#include <iostream>

using namespace std;

int a;

int sf, d;

int res;

int main()
{
    while(true){
        res = 1;
        
        cin >> a;
        
        if(a == 0) break;
        
        for(int i = 0; i < a; i++){
            cin >> sf >> d;
            
            res *= sf;
            res -= d;
        }
        
        cout << res << '\n';
    }
    return 0;
}
