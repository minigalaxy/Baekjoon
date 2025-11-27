#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;

int X = 0;

vector<long long> res;

void comb(string s, int p, int r){
    if(r == 0){
        sort(s.begin(), s.end(), greater<>());
            
        res.push_back(stoll(s));
        
        return;
    }
    
    for(int i = p + 1; i < 10 - r + 1; i++){
        s.push_back(i + '0');
        comb(s, i, r - 1);
        s.pop_back();
    }
}

int main()
{
    cin >> N;
    
    for(int i = 1; i <= 10; i++) comb("", -1, i);
    
    sort(res.begin(), res.end());
    
    if(N >= res.size()) cout << -1;
    else cout << res[N];
    
    return 0;
}
