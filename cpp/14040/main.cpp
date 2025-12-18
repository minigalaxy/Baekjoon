#include <iostream>

using namespace std;

string S;

int res = 0;

int main()
{
    cin >> S;
    
    for(int i = 0, l, r; i < S.size(); i++){
        l = i, r = i;
        
        while(-1 < l && r < S.size() && S[l] == S[r]){
            res = max(res, r - l + 1);
            
            l--;
            r++;
        }
        
        l = i, r = i + 1;
        
        while(-1 < l && r < S.size() && S[l] == S[r]){
            res = max(res, r - l + 1);
            
            l--;
            r++;
        }
    }
    
    cout << res;
    
    return 0;
}
