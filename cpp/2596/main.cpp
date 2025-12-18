#include <iostream>

using namespace std;

int N;

string S;

string c[8] = { "000000", "001111", "010011", "011100", "100110", "101001", "110101", "111010" };

string res;

int main()
{
    cin >> N >> S;
    
    for(int i = 0; i < N; i++){
        string t = S.substr(i * 6, 6);
        
        bool f = false;
        
        for(int j = 0; j < 8; j++){
            int d = 0;
            
            for(int k = 0; k < 6; k++) if(c[j][k] != t[k]) d++;
            
            if(d <= 1){
                res.push_back('A' + j);
                f = true;
                break;
            }
        }
        
        if(!f){
            cout << i + 1;
            
            return 0;
        }
    }
    
    cout << res;
    
    return 0;
}
