#include <iostream>

using namespace std;

bool p[1041] = { false, };

string w;

int s = 0;

int main()
{
    for(int i = 2; i <= 1040; i++){
        for(int j = 2; i * j <= 1040; j++){
            p[i * j] = true;
        }
    }
    
    cin >> w;
    
    for(char c: w){
        if(c >= 'a') s += c - 'a' + 1;
        else s += c - 'A' + 27;
    }
    
    cout << (!p[s] ? "It is a prime word." : "It is not a prime word.");
    
    return 0;
}
