#include <iostream>

using namespace std;

int N;

string s, t;

int main()
{
    cin >> N;
    
    cin >> s;
    
    for(int i = 1; i < N; i++){
        cin >> t;
        
        for(int j = 0; j < s.size(); j++){
            if(s[j] != t[j]) s[j] = '?';
        }
    }
    
    cout << s;
    
    return 0;
}
