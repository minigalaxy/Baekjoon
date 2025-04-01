#include <iostream>
#include <string>

using namespace std;

int N;

string s;

char c[26] = { 0, };

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> s;
        
        c[s[0] - 'a']++;
    }
    
    bool f = false;
    
    for(int i = 0; i < 26; i++){
        if(c[i] >= 5){
            f = true;
            cout << char('a' + i);
        }
    }
    
    if(!f) cout << "PREDAJA";
    
    return 0;
}
