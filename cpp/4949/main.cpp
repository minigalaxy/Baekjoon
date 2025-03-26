#include <iostream>
#include <stack>
#include <vector>

using namespace std;

string s;
vector<bool> r;

int main()
{
    while(true){
        stack<char> p;

        getline(cin, s);

        if(s == ".") break;

        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(' || s[i] == '[') p.push(s[i]);
            else if(s[i] == ')'){
                if(p.empty()){
                    p.push(' ');
                    break;
                }
                if(p.top() == '(') p.pop();
                else break;
            } else if(s[i] == ']'){
                if(p.empty()){
                    p.push(' ');
                    break;
                }
                if(p.top() == '[') p.pop();
                else break;
            }
        }

        r.push_back(p.empty());
    }

    for(bool t: r) cout << ((t) ? "yes" : "no") << '\n';

    return 0;
}
