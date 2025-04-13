#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int N;

string s[3];

map<string, int> cnt;

int res = 0;

int main()
{
    cin >> N;
    cin.ignore();
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < 3; j++) cin >> s[j];
        
        sort(s, s + 3);
        
        cnt[s[0] + " " + s[1] + " " + s[2]]++;
    }
    
    for(pair<string, int> p: cnt){
        res = max(res, p.second);
    }
    
    cout << res;
    
    return 0;
}
