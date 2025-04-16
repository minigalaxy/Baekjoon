#include <iostream>

using namespace std;

string s;

bool b[26] = { false, };

int main()
{
    cin >> s;
    
    for(char c: s){
        b[c - 'A'] = true;
    }
    
    for(int i = 0; i < 26; i++){
        if(!b[i]) cout << char('A' + i);
    }
    
    return 0;
}
