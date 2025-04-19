#include <iostream>

using namespace std;

string s;

string res = "UAPC";

int main()
{
    cin >> s;
    
    for(char c: res){
        if(s.find(c) == string::npos) cout << c;
    }
    
    return 0;
}
