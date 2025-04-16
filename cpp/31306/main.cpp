#include <iostream>

using namespace std;

string s;

int v = 0, y = 0;

int main()
{
    cin >> s;
    
    for(char c: s){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') v++;
        else if(c == 'y') y++;
    }
    
    cout << v << ' ' << v + y;
    
    return 0;
}
