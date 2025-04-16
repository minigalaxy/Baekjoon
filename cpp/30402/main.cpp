#include <iostream>

using namespace std;

char c;

string res;

int main()
{
    for(int i = 0; i < 15; i++){
        for(int j = 0; j < 15; j++){
            cin >> c;
            
            if(c == 'w') res = "chunbae";
            else if(c == 'b') res = "nabi";
            else if(c == 'g') res = "yeongcheol";
        }
    }
    
    cout << res;
    
    return 0;
}
