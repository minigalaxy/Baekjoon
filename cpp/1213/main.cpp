#include <iostream>

using namespace std;

string name;

int cnt[26] = { 0, };

int main()
{
    cin >> name;
    
    for(char c: name) cnt[c - 'A']++;
    
    int c = -1;
    
    for(int i = 0; i < 26; i++){
        if(cnt[i] % 2 == 1){
            if(c != -1){
                cout << "I'm Sorry Hansoo";
                
                return 0;
            }
            
            c = i;
        }
    }
    
    for(int i = 0; i < 26; i++) for(int j = 0; j < cnt[i] / 2; j++) cout << char('A' + i);
    
    if(c != -1) cout << char('A' + c);
    
    for(int i = 25; i > -1; i--) for(int j = 0; j < cnt[i] / 2; j++) cout << char('A' + i);
    
    return 0;
}
