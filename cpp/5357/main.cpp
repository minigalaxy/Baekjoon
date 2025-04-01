#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int n;

string s;

int main()
{
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> s;
        
        s.erase(unique(s.begin(), s.end()), s.end());
        
        cout << s << '\n';
    }
    
    return 0;
}
