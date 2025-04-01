#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string X, Y;

string res;

int main()
{
    cin >> X >> Y;
    
    reverse(X.begin(), X.end());
    reverse(Y.begin(), Y.end());
    
    res = to_string(stoi(X) + stoi(Y));
    
    reverse(res.begin(), res.end());
    
    cout << stoi(res);
    
    return 0;
}
