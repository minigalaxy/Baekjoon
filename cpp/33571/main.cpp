#include <iostream>

using namespace std;

string S;

int res = 0;

int main()
{
    getline(cin, S);
    
    for(char c: S){
        if(c == '@' || c == 'A' || c == 'a' || c == 'b' || c == 'D' || c == 'd' || c == 'e' || c == 'g' || c == 'O' || c == 'o' || c == 'P' || c == 'p' || c == 'Q' || c == 'q' || c == 'R') res++;
        else if(c == 'B') res += 2;
    }
    
    cout << res;
    
    return 0;
}
