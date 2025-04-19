#include <iostream>

using namespace std;

int s[10] = { 0, };

int main()
{
    for(int i = 0; i < 5; i++){
        int t;
        cin >> t;
        
        s[t]++;
    }
    
    for(int i = 0; i < 10; i++){
        if(s[i] % 2 == 1){
            cout << i;
            
            break;
        }
    }
    
    return 0;
}
