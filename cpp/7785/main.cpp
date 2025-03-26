#include <iostream>
#include <set>
#include <vector>
#include <string>

using namespace std;

int n;

set<string, greater<string>> ledger;

string name, state;

int main()
{
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> name >> state;

        if(state == "enter") ledger.insert(name);
        else ledger.erase(name);
    }

    for(auto i = ledger.begin(); i != ledger.end(); i++) cout << *i << '\n';

    return 0;
}
