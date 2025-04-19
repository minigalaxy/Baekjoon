#include <iostream>
#include <map>

using namespace std;

int n;

string s[20];

map<string, int> sc;

int m;

string d, e, c;

map<string, pair<int, int>> dc;
map<string, string> dict;

long long cc = 1, tc = 1;

int main()
{
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> s[i];
        
        sc[s[i]]++;
    }
    
    cin >> m;
    
    for(int i = 0; i < m; i++){
        cin >> d >> e >> c;
        
        if(c == "correct") dc[d].first++;
        else dc[d].second++;
        
        dict[d] = e;
    }
    
    for(pair<string, int> p: sc){
        for(int i = 0; i < p.second; i++){
            cc *= dc[p.first].first;
            tc *= (dc[p.first].first + dc[p.first].second);
        }
    }
    
    if(tc > 1) cout << cc << " correct\n" << tc - cc << " incorrect";
    else {
        bool f = true;
        
        for(int i = 0; i < n; i++){
            cout << dict[s[i]] << ' ';
            
            if(dc[s[i]].second > 0) f = false;
        }
        
        cout << '\n' << ((f) ? "correct" : "incorrect");
    }
    
    return 0;
}
