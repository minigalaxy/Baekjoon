#include <iostream>

using namespace std;

string a, b;

int cnt[26][2] = { 0, };

int res = 0;

int main()
{
    cin >> a >> b;
    
    for(char c: a) cnt[c - 'a'][0]++;
    for(char c: b) cnt[c - 'a'][1]++;
    
    for(int i = 0; i < 26; i++){
        res += abs(cnt[i][0] - cnt[i][1]);
    }
    
    cout << res;
    
    return 0;
}
