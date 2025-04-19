#include <iostream>

using namespace std;

int s;

int main()
{
    while(true){
        cin >> s;
        
        if(s == 0) break;
        
        for(int i = 1; i <= s; i++){
            for(int j = 0; j < i; j++) cout << '*';
            
            cout << '\n';
        }
    }
    return 0;
}
