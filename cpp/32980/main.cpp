#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

int N;

vector<string> g;

map<char, int> C;

long long res = 0;

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        string t;
        cin >> t;
        
        g.push_back(t);
    }
    
    cin >> C['P'];
    cin >> C['C'];
    cin >> C['V'];
    cin >> C['S'];
    cin >> C['G'];
    cin >> C['F'];
    cin >> C['O']; 
    
    for(string t: g){
        bool f = true;
        
        for(int i = 0; i < t.size() - 1 && f; i++){
            if(t[i] != t[i + 1]) f = false;
        }
        
        if(f) res += min(C[t[0]] * t.size(), C['O'] * t.size());
        else res += C['O'] * t.size();
    }
    
    cout << res;
    
    return 0;
}
