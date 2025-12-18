#include <iostream>

using namespace std;

string S;

int cnt[26] = { 0, };

bool visited[10] = { false, };

int solve(char p, int c){
    if(c == S.size()) return 1;
    
    int ret = 0;
    
    for(int i = 0; i < 26; i++){
        if(i != p && cnt[i] > 0){
            cnt[i]--;
            ret += solve(i, c + 1);
            cnt[i]++;
        }
    }
    
    return ret;
}

int main()
{
    cin >> S;
    
    for(char c: S) cnt[c - 'a']++;
    
    cout << solve(-1, 0);
    
    return 0;
}
