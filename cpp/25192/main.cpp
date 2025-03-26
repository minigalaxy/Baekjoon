#include <iostream>
#include <set>

using namespace std;

int N;

string chat;

set<string> user;

int res = 0;

int main()
{
    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> chat;

        if(chat == "ENTER"){
            res += user.size();
            user.clear();
        } else user.insert(chat);
    }

    cout << res + user.size();

    return 0;
}
