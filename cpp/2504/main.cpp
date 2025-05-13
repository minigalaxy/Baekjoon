#include <iostream>
#include <stack>

using namespace std;

string S;

stack<pair<char, int>> P;

int res = 0;

int main()
{
    cin >> S;
    
    for(char c: S){
        if(c == '(') P.push({ '(', 2 });
        else if(c == '[') P.push({ '[', 3 });
        else if(c == ')' || c == ']'){
            int v = 0;
            
            while(!P.empty() && (P.top().first == ')' || P.top().first == ']')){
                v += P.top().second;
                P.pop();
            }
            
            if(v == 0) v = 1;
            
            if(P.empty()){
                cout << 0;
                
                return 0;
            } else if(P.top().first == '(' && c == ')'){
                P.top().first = ')';
                P.top().second *= v;
            } else if(P.top().first == '[' && c == ']'){
                P.top().first = ']';
                P.top().second *= v;
            } else {
                cout << 0;
                
                return 0;
            }
        }
    }
    
    while(!P.empty()){
        if(P.top().first == '(' || P.top().first == '['){
            cout << 0;
            
            return 0;
        }
            
        res += P.top().second;
        P.pop();
    }
    
    cout << res;
    
    return 0;
}
