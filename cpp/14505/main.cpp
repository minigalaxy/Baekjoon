#include <iostream>

using namespace std;

string S;

int m[30][30];

int main()
{
    cin >> S;
    
    for(int i = 0; i < S.size(); i++) m[i][i] = 1;
    
    for(int i = 0; i < S.size() - 1; i++){
        if(S[i] == S[i + 1]) m[i][i + 1] = 3;
        else m[i][i + 1] = 2;
    }
    
    for(int l = 3; l <= S.size(); l++){
        int i = 0, j = l - 1;
        
        while(j < S.size()){
            if(S[i] == S[j]) m[i][j] = m[i + 1][j] + m[i][j - 1] - m[i + 1][j - 1] + (m[i + 1][j - 1] + 1);
            else m[i][j] = m[i + 1][j] + m[i][j - 1] - m[i + 1][j - 1];
            
            i++;
            j++;
        }
    }
    
    cout << m[0][S.size() - 1];
    
    return 0;
}
