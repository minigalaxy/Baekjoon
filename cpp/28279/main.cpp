#include <iostream>
#include <deque>

using namespace std;

int N;

int command, X;

deque<int> D;

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

            D.push_front(X);
        } else if(command == 2){
            cin >> X;

            D.push_back(X);
        } else if(command == 3){
            if(D.empty()) cout << -1 << '\n';
            else {
                cout << D.front() << '\n';
                D.pop_front();
            }
        } else if(command == 4){
            if(D.empty()) cout << -1 << '\n';
            else {
                cout << D.back() << '\n';
                D.pop_back();
            }
        } else if(command == 5){
            cout << D.size() << '\n';
        } else if(command == 6){
            cout << D.empty() << '\n';
        } else if(command == 7){
            if(D.empty()) cout << -1 << '\n';
            else cout << D.front() << '\n';
        } else if(command == 8){
            if(D.empty()) cout << -1 << '\n';
            else cout << D.back() << '\n';
        }
    }

    return 0;
}
