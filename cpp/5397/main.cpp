#include <iostream>
#include <string>
#include <vector>

using namespace std;

int T;

string s;

string res;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> T;
    
    for(int i = 0; i < T; i++){
        res.clear();
            
        cin >> s;
        
        int cur = 0;
        
        for(char c: s){
            if(c == '<'){
                cur = max(0, cur - 1);
            } else if(c == '>'){
                cur = min(int(res.size()), cur + 1);
            } else if(c == '-'){
                if(cur > 0){
                    res.erase(res.begin() + cur - 1);
                    cur = max(0, cur - 1);
                }
            } else {
                res.insert(res.begin() + cur, c);
                cur++;
            }
        }
        
        cout << res << '\n';
    }
    
    return 0;
}
