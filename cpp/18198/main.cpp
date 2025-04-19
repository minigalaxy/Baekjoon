#include <iostream>

using namespace std;

string s;

int A = 0, B = 0;

int main()
{
    cin >> s;

    for(int i = 0; i < s.size(); i += 2){
        if(s[i] == 'A') A += s[i + 1] - '0';
        else B += s[i + 1] - '0';
    }

    cout << ((A > B) ? 'A' : 'B');

    return 0;
}
