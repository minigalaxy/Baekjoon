#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string s;

int res = 0;

int main()
{
    cin >> s;
    
    reverse(s.begin(), s.end());
    
    int t = 1;
    
    for(char c: s){
        int n = (c >= 'A') ? c - 'A' + 10 : c - '0';
        
        res += n * t;
        t *= 16;
    }
    
    cout << res;
    
    return 0;
}
