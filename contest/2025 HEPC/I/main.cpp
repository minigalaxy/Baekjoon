#include <iostream>
#include <vector>
#include <map>

using namespace std;

string S;

vector<char> var;

map<char, int> used;
map<char, bool> use;

string O;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int i = 0;
    
    while(true){
        getline(cin, S);
        
        if(S.find("for") != string::npos){
            char v = S[S.find("for") + 9];
            
            var.push_back(v);
            used[v] = i;
        } else {
            O = S.substr(i);
            
            for(char c: S){
                if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) use[c] = true;
            }
            
            break;
        }
        
        i++;
    }
    
    int j = 0, k = 0;
    
    for(char v: var){
        if(use[v] && used[v] == j){
            for(int i = 0; i < k; i++) cout << ' ';
                
            cout << "for (int " << v << " = 1; " << v << " < 9; " << v << "++)\n";
            
            k++;
        }
        
        j++;
    }
    
    for(int l = 0; l < k; l++) cout << ' ';
    
    cout << O;
    
    return 0;
}
