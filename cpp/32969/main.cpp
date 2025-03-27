#include <iostream>
#include <string>

using namespace std;

string t;

int main()
{
    getline(cin, t);
    
    if(t.find("bigdata") != string::npos || t.find("public") != string::npos || t.find("society") != string::npos) cout << "public bigdata";
    else cout << "digital humanities";
    
    return 0;
}
