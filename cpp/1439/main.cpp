#include <iostream>

using namespace std;

string S;

char p;

int cnt = 1;

int main()
{
    cin >> S;
    
    p = S[0];
    
    for(char c: S){
        if(c != p) cnt++;
        
        p = c;
    }
    
    cout << cnt / 2;
    
    return 0;
}
