#include <iostream>
#include <algorithm>

using namespace std;

int N;

string S;

int main()
{
    cin >> N >> S;
    
    cout << ((count(S.begin(), S.end(), S[0]) == S.size()) ? "Yes" : "No");
    
    return 0;
}
