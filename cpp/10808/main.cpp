#include <iostream>

using namespace std;

string S;

int cnt[26] = { 0, };

int main()
{
    cin >> S;
    
    for(char c: S){
        cnt[c - 'a']++;
    }
    
    for(int i = 0; i < 26; i++) cout << cnt[i] << ' ';
    
    return 0;
}
