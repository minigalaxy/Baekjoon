#include <iostream>
#include <regex>

using namespace std;

int T;

string P;

int main()
{
    cin >> T;
    
    for(int i = 0; i < T; i++){
        cin >> P;
        
        cout << (regex_match(P, regex("(100+1+|01)+")) ? "YES" : "NO") << '\n';
    }
    
    return 0;
}
