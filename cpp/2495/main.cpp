#include <iostream>

using namespace std;

string s;

int main()
{
    for(int i = 0; i < 3; i++){
        cin >> s;
        
        int res = 1, stk = 1;
        char p = s[0];
        
        for(int j = 1; j < s.size(); j++){
            if(s[j] != p){
                p = s[j];
                stk = 1;
            }
            else res = max(res, ++stk);
        }
        
        cout << res << '\n';
    }
    
    return 0;
}
