#include <iostream>
#include <set>

using namespace std;

int n, m;

set<string> dict;

int main()
{
    cin >> n;
    
    for(int i = 0; i < n; i++){
        string d;
        cin >> d;
        
        dict.insert(d);
    }
    
    cin >> m;
    
    for(int i = 0; i < m; i++){
        string t;
        cin >> t;
        
        if(dict.find(t) != dict.end()) cout << "1\n";
        else {
            for(int j = 1; j < t.size(); j++){
                if(dict.find(t.substr(0, j)) != dict.end() && dict.find(t.substr(j, t.size())) != dict.end()){
                    t = "";
                    
                    cout << "2\n";
                
                    break;
                }
            }
            
            if(!t.empty()) cout << "0\n";
        }
    }
    
    return 0;
}
