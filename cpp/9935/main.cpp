#include <iostream>
#include <string>
#include <stack>

using namespace std;

string str;
string expl_str;

stack<int> len;

string res;

int main()
{
    cin >> str >> expl_str;

    for(int i = 0; i < str.size(); i++){
        if(str[i] == expl_str[0]){
            int j = i;

            while(j < str.size()){
                if(str[j] == expl_str[0]){
                    len.push(1);
                    if(len.top() == expl_str.size()) len.pop();
                } else if(!len.empty() && str[j] == expl_str[len.top()]){
                    if(++len.top() == expl_str.size()) len.pop();
                } else break;

                j++;
            }

            stack<int> tmp;

            while(!len.empty()){
                tmp.push(len.top());
                len.pop();
            }

            while(!tmp.empty()){
                res += expl_str.substr(0, tmp.top());
                tmp.pop();
            }

            i = j - 1;
        } else res.push_back(str[i]);
    }

    cout << ((res.empty()) ? "FRULA" : res);

    return 0;
}
