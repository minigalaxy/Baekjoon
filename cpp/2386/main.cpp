#include <iostream>

using namespace std;

string s;

int main()
{
    while(true){
        int res = 0;
            
        getline(cin, s);
        
        if(s == "#") break;
        
        for(int i = 2; i < s.size(); i++){
            if(tolower(s[i]) == s[0]) res++;
        }
        
        cout << s[0] << ' ' << res << '\n';
    }
    return 0;
}
