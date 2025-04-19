#include <iostream>

using namespace std;

int T;

string s;

int main()
{
    cin >> T;
    
    for(int i = 0; i < T; i++){
        cin >> s;
            
        int h = 0;
        
        for(char c: s){
            if(c == 'U') h++;
            else break;
        }
        
        cout << h << '\n';
    }
    
    return 0;
}
