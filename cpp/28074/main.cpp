#include <iostream>

using namespace std;

string s;

int main()
{
    cin >> s;
    
    if(s.find('M') != string::npos && s.find('O') != string::npos && s.find('B') != string::npos && s.find('I') != string::npos && s.find('S') != string::npos) cout << "YES";
    else cout << "NO";
    
    return 0;
}
