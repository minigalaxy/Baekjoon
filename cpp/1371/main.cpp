#include <iostream>
#include <string>

using namespace std;

string s;

int c[26] = { 0, };

int res = 0;

int main()
{
    while(getline(cin, s)){
        for(char t: s){
            if(t != ' ') c[t - 97]++;
        }
    }
        
    for(int i = 0; i < 26; i++) res = max(res, c[i]);
    
    for(int i = 0; i < 26; i++){
        if(c[i] == res) cout << char(i + 97);
    }
    
    return 0;
}
