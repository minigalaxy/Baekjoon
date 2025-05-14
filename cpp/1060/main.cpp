#include <iostream>
#include <queue>
#include <set>
#include <algorithm>

using namespace std;

const long long MAX = 250'000'000'000'000'000;

long long S[51] = { 0, };

int L;

int n;

set<int> visited;
priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> Q;

int main()
{
    cin >> L;
    
    for(int i = 1; i <= L; i++) cin >> S[i];
    
    sort(S, S + L + 1);
    
    for(int i = 1; i <= L; i++){
        visited.insert(S[i]);
        Q.push({ 0, S[i] });
    }
    
    if(visited.find(1) == visited.end()){
        visited.insert(1);
        Q.push({ S[1] - 2, 1 });
    }
    
    cin >> n;
    
    for(int i = 0; i < n; i++){
        pair<long long, int> p = Q.top();
        Q.pop();
        
        cout << p.second << ' ';
        
        if(visited.find(p.second - 1) == visited.end() && p.second - 1 > 0){
            auto idx = lower_bound(S, S + L + 1, p.second - 1);
        
            visited.insert(p.second - 1);
            Q.push({ (*idx - (p.second - 1)) * ((p.second - 1) - *(idx - 1)) - 1, p.second - 1 });
        }
        if(visited.find(p.second + 1) == visited.end()){
            auto idx = lower_bound(S, S + L + 1, p.second + 1);
            
            if(idx == S + L + 1){
                visited.insert(p.second + 1);
                Q.push({ MAX, p.second + 1 });
            } else {
                visited.insert(p.second + 1);
                Q.push({ (*idx - (p.second + 1)) * ((p.second + 1) - *(idx - 1)) - 1, p.second + 1 });
            }
        }
    }
    
    return 0;
}
