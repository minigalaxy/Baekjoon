#include <iostream>
#include <stack>
#include <vector>
#include <string>

using namespace std;

int T;

string s;

vector<bool> r;

int main()
{
    cin >> T;

    for(int i = 0; i < T; i++){
        stack<char> p;

        cin >> s;

        for(int j = 0; j < s.size(); j++){
            if(s[j] == '(' || s[j] == '[') p.push(s[j]);
            else if(s[j] == ')'){
                if(p.empty()){
                    p.push(' ');
                    break;
                } else {
                    if(p.top() == '(') p.pop();
                    else break;
                }
            } else {
                if(p.empty()){
                    p.push(' ');
                    break;
                } else {
                    if(p.top() == '[') p.pop();
                    else break;
                }
            }
        }

        r.push_back(p.empty());
    }

    for(bool t: r) cout << ((t) ? "YES" : "NO") << '\n';

    return 0;
}
