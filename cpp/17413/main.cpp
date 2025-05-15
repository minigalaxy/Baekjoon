#include <iostream>
#include <stack>

using namespace std;

string S;

stack<char> W;

int main()
{
    getline(cin, S);
    
    bool tag = false;
    
    for(char c: S){
        if(c == '<'){
            tag = true;
        
            while(!W.empty()){
                cout << W.top();
                W.pop();
            }
        }
        
        if(tag) cout << c;
        else {
            if(c == ' '){
                while(!W.empty()){
                    cout << W.top();
                    W.pop();
                }
                
                cout << ' ';
            } else W.push(c);
        }
        
        
        if(c == '>') tag = false;
    }
    
    while(!W.empty()){
        cout << W.top();
        W.pop();
    }
    
    return 0;
}
