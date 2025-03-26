#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

int T;

int k;

char command;
int n;

vector<string> res;

int main()
{
    cin >> T;

    for(int i = 0; i < T; i++){
        priority_queue<int, vector<int>, greater<int>> min_Q;
        priority_queue<int> max_Q;

        priority_queue<int> min_p;
        priority_queue<int, vector<int>, greater<int>> max_p;

        string s;

        cin >> k;

        for(int j = 0; j < k; j++){
            cin >> command >> n;

            if(command == 'I'){
                min_Q.push(n);
                max_Q.push(n);
            } else {
                if(!max_Q.empty()){
                    if(n == 1){
                        max_p.push(max_Q.top());
                        max_Q.pop();
                    } else {
                        min_p.push(min_Q.top());
                        min_Q.pop();
                    }

                    while(!max_Q.empty() && !min_p.empty()){
                        if(max_Q.top() == min_p.top()){
                            max_Q.pop();
                            min_p.pop();
                        } else break;
                    }
                    while(!min_Q.empty() && !max_p.empty()){
                        if(min_Q.top() == max_p.top()){
                            min_Q.pop();
                            max_p.pop();
                        } else break;
                    }
                }
            }
        }

        if(min(max_Q.size(), min_Q.size()) > 0) s = to_string(max_Q.top()) + " " + to_string(min_Q.top());
        else s = "EMPTY";

        res.push_back(s);
    }

    for(string t: res) cout << t << '\n';

    return 0;
}
