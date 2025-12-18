#include <iostream>
#include <algorithm>

using namespace std;

int T;

string a, b;

int main()
{
    cin >> T;
    
    for(int i = 0; i < T; i++){
        cin >> a >> b;
        
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        
        while(a.size() < b.size()) a.push_back('0');
        while(a.size() > b.size()) b.push_back('0');
        
        string res;
        
        int s = 0, c = 0;
        
        for(int j = 0; j < a.size(); j++){
            s = a[j] - '0' + b[j] - '0' + c;
            c = 0;
            
            if(s >= 2){
                s -= 2;
                c++;
            }
            
            res.push_back('0' + s);
        }
        
        if(c > 0) res.push_back('1');
        else while(res.back() == '0' && res.size() > 1) res.pop_back();
        
        reverse(res.begin(), res.end());
        
        cout << res << '\n';
    }
    
    return 0;
}
