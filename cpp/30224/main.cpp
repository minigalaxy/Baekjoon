#include <iostream>
#include <string>

using namespace std;

string s;

int res = 0;

int main()
{
    cin >> s;
    
    if(s.find('7') != string::npos) res += 2;
    if(stoi(s) % 7 == 0) res++;
    
    cout << res;
    
    return 0;
}
