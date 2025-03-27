#include <iostream>

using namespace std;

int res = 0;

string s;

int main()
{
    while(getline(cin, s)){
        res++;
    }
    
    cout << res;
    
    return 0;
}
