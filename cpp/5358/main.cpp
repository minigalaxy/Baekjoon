#include <iostream>
#include <string>

using namespace std;

string s;

int main()
{
    while(getline(cin, s)){
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'i') s[i] = 'e';
            else if(s[i] == 'e') s[i] = 'i';
            else if(s[i] == 'I') s[i] = 'E';
            else if(s[i] == 'E') s[i] = 'I';
        }
        
        cout << s << '\n';
    }
    
    return 0;
}
