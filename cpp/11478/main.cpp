#include <iostream>
#include <string>
#include <set>

using namespace std;

string S;

set<string> ss;

int main()
{
    cin >> S;

    for(int i = 0; i < S.size(); i++){
        for(int j = i; j < S.size(); j++){
            ss.insert(S.substr(i, j - i + 1));
        }
    }

    cout << ss.size();

    return 0;
}
