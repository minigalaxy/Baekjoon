#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int N;

string command;
int X;

queue<int> main_queue;

vector<int> result;

int main()
{
    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> command;

        if(command == "push"){
            cin >> X;

            main_queue.push(X);
        }
        else if(command == "pop"){
            if(!main_queue.empty()){
                result.push_back(main_queue.front());
                main_queue.pop();
            }
            else result.push_back(-1);
        }
        else if(command == "size") result.push_back(main_queue.size());
        else if(command == "empty") result.push_back(main_queue.empty());
        else if(command == "front"){
            if(!main_queue.empty()) result.push_back(main_queue.front());
            else result.push_back(-1);
        }
        else {
            if(!main_queue.empty()) result.push_back(main_queue.back());
            else result.push_back(-1);
        }
    }

    for(int t: result) cout << t << '\n';

    return 0;
}
