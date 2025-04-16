#include <iostream>
#include <algorithm>

using namespace std;

string s;

int main()
{
    getline(cin, s);
    
    s.erase(unique(s.begin(), s.end()), s.end());
    
    cout << s;
    
    return 0;
}
