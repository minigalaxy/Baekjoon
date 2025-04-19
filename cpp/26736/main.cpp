#include <iostream>

using namespace std;

string s;

int A = 0, B = 0;

int main()
{
    cin >> s;
    
    for(char c: s){
        if(c == 'A') A++;
        else B++;
    }
    
    cout << A << " : " << B;
    
    return 0;
}
