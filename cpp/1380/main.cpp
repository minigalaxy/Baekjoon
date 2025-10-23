#include <iostream>

using namespace std;

int n;

string S[100];

int num;
char c;

bool b[100];

int s = 1;

int main()
{
    while(true){
        cin >> n;
        cin.ignore();
        
        if(n == 0) break;
        
        for(int i = 0; i < n; i++) getline(cin, S[i]);
        
        fill(b, b + n, false);
        
        for(int i = 0; i < n * 2 - 1; i++){
            cin >> num >> c;
            
            b[num - 1] = !b[num - 1];
        }
        
        for(int i = 0; i < n; i++) if(b[i]) cout << s << ' ' << S[i] << '\n';
    
        s++;
    }
    
    return 0;
}
