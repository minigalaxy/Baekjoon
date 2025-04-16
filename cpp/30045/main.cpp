#include <iostream>

using namespace std;

int N;

string S;

int res = 0;

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> S;
        
        if(S.find("01") != string::npos || S.find("OI") != string::npos) res++;
    }
    
    cout << res;
    
    return 0;
}
