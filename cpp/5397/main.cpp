#include <iostream>
#include <string>
#include <stack>

using namespace std;

int T;

string s;

stack<char> l, r;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> T;
    
    for(int i = 0; i < T; i++){
        cin >> s;
        
        for(char c: s){
            if(c == '<'){
                if(!l.empty()){
                    r.push(l.top());
                    l.pop();
                }
            } else if(c == '>'){
                if(!r.empty()){
                    l.push(r.top());
                    r.pop();
                }
            } else if(c == '-'){
                if(!l.empty()) l.pop();
            } else {
                l.push(c);
            }
        }
        
        stack<char> t;
        
        while(!l.empty()){
            t.push(l.top());
            l.pop();
        }
        
        while(!t.empty()){
            cout << t.top();
            t.pop();
        }
        while(!r.empty()){
            cout << r.top();
            r.pop();
        }
        
        cout << '\n';
    }
    
    return 0;
}
