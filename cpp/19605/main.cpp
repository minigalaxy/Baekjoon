#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string T, S, S2;

bool res = false;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> T >> S;

    S2 = S + S;

    for(int i = 0; i < S.size(); i++){
        string s = S2.substr(i, S.size());

        if(T.find(s) != string::npos) res = true;
    }

    cout << ((res) ? "yes" : "no");

    return 0;
}
