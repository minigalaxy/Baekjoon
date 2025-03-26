#include <iostream>
#include <algorithm>

using namespace std;

string S;
int n[26];

int main()
{
    fill(n, n + 26, -1);

    cin >> S;

    for(int i = 0; i < S.size(); i++){
        if(n[int(S[i]) - 97] == -1) n[int(S[i]) - 97] = i;
    }

    for(int i = 0; i < 26; i++) cout << n[i] << ' ';

    return 0;
}
