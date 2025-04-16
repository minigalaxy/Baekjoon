#include <iostream>
#include <algorithm>

using namespace std;

string S[3];

int main()
{
    cin >> S[0] >> S[1] >> S[2];
    
    sort(S, S + 3);
    
    cout << ((S[0][0] == 'k' && S[1][0] == 'l' && S[2][0] == 'p') ? "GLOBAL" : "PONIX");
    
    return 0;
}
