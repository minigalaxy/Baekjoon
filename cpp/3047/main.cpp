#include <iostream>
#include <algorithm>

using namespace std;

int N[3];

string S;

int main()
{
    cin >> N[0] >> N[1] >> N[2];
    
    sort(N, N + 3);
    
    cin >> S;
    
    for(char c: S){
        if(c == 'A') cout << N[0];
        else if(c == 'B') cout << N[1];
        else cout << N[2];
        
        cout << ' ';
    }
    
    return 0;
}
