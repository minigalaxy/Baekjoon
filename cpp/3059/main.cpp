#include <iostream>

using namespace std;

int T;

bool b[26] = { false, };

string s;

int main()
{
    cin >> T;
    
    for(int i = 0; i < T; i++){
        fill(b, b + 26, false);
        
        cin >> s;
        
        for(char c: s) b[c - 'A'] = true;
        
        int res = 0;
        
        for(int j = 0; j < 26; j++){
            if(!b[j]) res += j + 'A';
        }
        
        cout << res << '\n';
    }
    
    return 0;
}
