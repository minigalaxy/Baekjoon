#include <iostream>
#include <string>
#include <set>

using namespace std;

int n;

string s;

set<char> c;

int main()
{
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> s;

        c.insert(s[0]);

    }

    int tmp = 'A';

    for(char t: c){
        if(t == tmp) tmp++;
        else break;
    }

    cout << tmp - 'A';

    return 0;
}
