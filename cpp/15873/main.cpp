#include <iostream>

using namespace std;

string s;

int main()
{
    cin >> s;
    
    if(s.size() == 4) cout << 20;
    else if(s.size() == 3){
      if(s[1] == '0') cout << 10 + s[2] - '0';
      else cout << s[0] - '0' + 10;  
    } else cout << s[0] - '0' + s[1] - '0';
    
    return 0;
}
