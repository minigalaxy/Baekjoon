#include <iostream>

using namespace std;

string S;

string res;

int main()
{
    cin >> S;
    
    int i = 0;
    
    while(i < S.size()){
        res.push_back(S[i]);
        i += S[i] - 'A' + 1;
    }
    
    cout << res;
    
    return 0;
}
