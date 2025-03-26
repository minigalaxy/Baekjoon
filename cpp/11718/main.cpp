#include <iostream>
#include <vector>
#include <string>

using namespace std;

string str;

vector<string> res;

int main()
{
    while(getline(cin, str)) res.push_back(str);

    for(string t: res) cout << t << '\n';

    return 0;
}
