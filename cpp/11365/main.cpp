#include <iostream>
#include <algorithm>

using namespace std;

string s;

int main()
{
    while(true){
        getline(cin, s);
        
        if(s == "END") break;
    
        reverse(s.begin(), s.end());
        
        cout << s << '\n';
    }
    return 0;
}
