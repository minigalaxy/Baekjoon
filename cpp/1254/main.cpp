#include <iostream>

using namespace std;

string S;

int res = 1;

int main()
{
    cin >> S;
    
    for(int i = S.size() / 2; i < S.size(); i++){
        int j = 0;
        
        while(-1 < i - j && i + j < S.size() && S[i - j] == S[i + j]) j++;
    
        if(i + j == S.size()) res = max(res, j * 2 - 1);
    }
    
    for(int i = (S.size() + 1) / 2; i < S.size(); i++){
        int j = 0;
        
        while(-1 < i - j - 1 && i + j < S.size() && S[i - j - 1] == S[i + j]) j++;
        
        if(i + j == S.size()) res = max(res, j * 2);
    }
    
    cout << S.size() + S.size() - res;
    
    return 0;
}
