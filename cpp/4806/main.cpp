#include <iostream>

using namespace std;

string s;

int res = 0;

int main()
{
    while(getline(cin, s)) res++;
    
    cout << res;
    
    return 0;
}
