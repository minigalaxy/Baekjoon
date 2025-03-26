#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int N;

queue<int> line;
stack<int> sub_line;

int main()
{
    cin >> N;

    for(int i = 0; i < N; i++){
        int t;
        cin >> t;

        line.push(t);
    }

    for(int i = 1; i <= N; i++){
        if(!sub_line.empty() && sub_line.top() == i) sub_line.pop();
        else if(!line.empty() && line.front() == i) line.pop();
        else {
            while(!line.empty() && line.front() != i){
                sub_line.push(line.front());
                line.pop();
            }

            if(line.empty()){
                cout << "Sad";
                return 0;
            } else line.pop();
        }
    }

    cout << "Nice";

    return 0;
}
