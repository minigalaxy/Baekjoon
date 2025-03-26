#include <iostream>
#include <stack>

using namespace std;

int N;

int command, X;

stack<int> S;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> command;

        if(command == 1){
            cin >> X;

            S.push(X);
        } else if(command == 2){
            if(S.empty()) cout << -1 << '\n';
            else {
                cout << S.top() << '\n';
                S.pop();
            }
        } else if(command == 3){
            cout << S.size() << '\n';
        } else if(command == 4){
            cout << S.empty() << '\n';
        } else {
            if(S.empty()) cout << -1 << '\n';
            else cout << S.top() << '\n';
        }
    }

    return 0;
}
