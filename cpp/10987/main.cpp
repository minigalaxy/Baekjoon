#include <iostream>

using namespace std;

string s;

int res = 0;

int main()
{
    cin >> s;
    
    for(char c: s){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') res++;
    }
    
    cout << res;
    
    return 0;
}
