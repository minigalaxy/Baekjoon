#include <iostream>

using namespace std;

int n;

string s;

int i, j;

int main()
{
    cin >> n;
    
    for(int k = 0; k < n; k++){
        cin >> s >> i >> j;
        
        cout << s.substr(0, i) << s.substr(j) << '\n';
    }
    
    return 0;
}
