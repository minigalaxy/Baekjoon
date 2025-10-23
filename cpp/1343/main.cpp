#include <iostream>

using namespace std;

string board;

int cnt = 0, b[50];

string res;

int main()
{
    cin >> board;
    
    bool t = (board[0] == 'X');
    
    for(char c: board){
        if(c == 'X'){
            if(t) b[cnt]++;
            else {
                b[++cnt]++;
                t = !t;
            }
        } else {
            if(!t) b[cnt]++;
            else {
                b[++cnt]++;
                t = !t;
            }
        }
    }
    
    t = (board[0] == 'X');
    
    for(int i = 0; i <= cnt; i++){
        if(t){
            if(b[i] % 2 != 0){
                cout << -1;
                return 0;
            }
            
            while(b[i] >= 4){
                res += "AAAA";
                b[i] -= 4;
            }
            
            while(b[i] >= 2){
                res += "BB";
                b[i] -= 2;
            }
        } else {
            for(int j = 0; j < b[i]; j++) res.push_back('.');
        }
        
        t = !t;
    }
    
    cout << res;
    
    return 0;
}
