#include <iostream>

using namespace std;

string s;

int main()
{
    getline(cin, s);
    
    if(s.front() == '"' && s.back() == '"'){
        if(s.substr(1, s.size() - 2).empty()) cout << "CE";
        else cout << s.substr(1, s.size() - 2);
    } else cout << "CE";
    
    return 0;
}
