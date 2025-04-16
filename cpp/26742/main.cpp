#include <iostream>

using namespace std;

string s;

int B = 0, C = 0;

int main()
{
    cin >> s;
    
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'B') B++;
        else C++;
    }
    
    cout << B / 2 + C / 2;
    
    return 0;
}
