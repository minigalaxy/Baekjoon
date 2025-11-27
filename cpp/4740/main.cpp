#include <iostream>
#include <algorithm>

using namespace std;

string S;

int main()
{
    while(true){
        getline(cin, S);
        
        if(S == "***") break;
        
        reverse(S.begin(), S.end());
        
        cout << S << '\n';
    }
    
    return 0;
}
