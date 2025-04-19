#include <iostream>

using namespace std;

int N;

string s;

int main()
{
    cin >> N;
    cin.ignore();
    
    for(int i = 1; i <= N; i++){
        getline(cin, s);
        
        cout << "Case #" << i << ": ";
        
        int p = -1;
        
        for(char c: s){
            int l, cnt;
                
            if(c == ' '){
                l = 0;
                cnt = 1;
            } else if(c <= 'o'){
                l = (c - 'a') / 3 + 2;
                cnt = (c - 'a') % 3 + 1;
            } else if(c <= 's'){
                l = 7;
                cnt = c - 'p' + 1;
            } else if(c <= 'v'){
                l = 8;
                cnt = c - 't' + 1;
            } else if(c <= 'z'){
                l = 9;
                cnt = c - 'w' + 1;
            }
            
            if(p == l) cout << ' ';
            
            for(int j = 0; j < cnt; j++) cout << l;
            
            p = l;
        }
        
        cout << '\n';
    }
    
    return 0;
}
