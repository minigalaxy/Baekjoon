#include <iostream>
#include <string>

using namespace std;

int n;

string s;

int main()
{
    cin >> n;
    
    for(int i = 0; i < n / 5; i++) s.push_back('V');
    for(int i = 0; i < n % 5; i++) s.push_back('I');
    
    cout << s;
    
    return 0;
}
