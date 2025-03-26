#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int N;

string command;
int X;

stack<int> main_stack;

vector<int> result;

int main()
{
    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> command;

        if(command == "push"){
            cin >> X;

            main_stack.push(X);
        }
        else if(command == "pop"){
            if(!main_stack.empty()){
                result.push_back(main_stack.top());
                main_stack.pop();
            }
            else result.push_back(-1);
        }
        else if(command == "size") result.push_back(main_stack.size());
        else if(command == "empty") result.push_back(main_stack.empty());
        else {
            if(!main_stack.empty()) result.push_back(main_stack.top());
            else result.push_back(-1);
        }
    }

    for(int t: result) cout << t << '\n';

    return 0;
}
