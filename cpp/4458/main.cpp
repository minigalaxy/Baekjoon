#include <iostream>

using namespace std;

int N;

string s;

int main()
{
    cin >> N;
    cin.ignore();
    
    for(int i = 0; i < N; i++){
        getline(cin, s);
        
        if(s[0] >= 'a') s[0] = s[0] - 'a' + 'A';
        
        cout << s << '\n';
    }
    
    return 0;
}
