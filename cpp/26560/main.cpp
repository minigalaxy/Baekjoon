#include <iostream>

using namespace std;

int n;

string s;

int main()
{
    cin >> n;
    cin.ignore();
    
    for(int i = 0; i < n; i++){
        getline(cin, s);
        
        cout << s;
        
        if(s.back() != '.') cout << '.';
        
        cout << '\n';
    }
    
    return 0;
}
