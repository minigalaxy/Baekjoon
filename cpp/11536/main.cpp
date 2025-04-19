#include <iostream>

using namespace std;

int N;

string s[20];

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++) cin >> s[i];
    
    bool ic = true, dc = true;
    
    for(int i = 0; i < N - 1; i++){
        if(s[i + 1] >= s[i]) dc = false;
        if(s[i + 1] <= s[i]) ic = false;
    }
    
    if(ic) cout << "INCREASING";
    else if(dc) cout << "DECREASING";
    else cout << "NEITHER";
    
    return 0;
}
