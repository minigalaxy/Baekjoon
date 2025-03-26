#include <iostream>
#include <string>
#include <vector>

using namespace std;

int T;

vector<string> str;

int main()
{
    cin >> T;

    for(int i = 0; i < T; i++){
        string t;
        cin >> t;

        str.push_back(t);
    }

    for(string t: str) cout << t.front() << t.back() << '\n';

    return 0;
}
