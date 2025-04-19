#include <iostream>

using namespace std;

int N;

string K;

int E = 0, O = 0;

int main()
{
    cin >> N >> K;
    
    for(char c: K){
        if((c - '0') % 2 == 0) E++;
        else O++;
    }
    
    if(E > O) cout << 0;
    else if(E < O) cout << 1;
    else cout << -1;
    
    return 0;
}
