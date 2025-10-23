#include <iostream>

using namespace std;

string str;

int main()
{
    cin >> str;
    
    for(char c: str){
        if(65 <= c && c <= 90) cout << c;
    }
    
    return 0;
}
