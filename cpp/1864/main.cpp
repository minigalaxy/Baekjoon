#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

string s;

map<char, int> n = {
{ '-', 0 },
{ '\\', 1 },
{ '(', 2 },
{ '@', 3 },
{ '?', 4 },
{ '>', 5 },
{ '&', 6 },
{ '%', 7 },
{ '/', -1 },
};

int main()
{
    while(true){
        cin >> s;
        
        if(s == "#") break;
        
        reverse(s.begin(), s.end());
        
        int m = 1, res = 0;
        
        for(char c: s){
            res += n[c] * m;
            
            m = m << 3;
        }
        
        cout << res << '\n';
    }
    return 0;
}
