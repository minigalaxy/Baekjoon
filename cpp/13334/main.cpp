#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int n;

pair<int, int> ho[100000];

int d;

priority_queue<int, vector<int>, greater<int>> L;

int res = 0;

int main()
{
    cin >> n;
    
    for(int i = 0; i < n; i++){
        int h, o;
        cin >> h >> o;
        
        ho[i].first = max(h, o);
        ho[i].second = min(h, o);
    }
    
    cin >> d;
    
    sort(ho, ho + n);
    
    for(int i = 0; i < n; i++){
        L.push(ho[i].second);
        
        while(!L.empty() && L.top() < ho[i].first - d) L.pop();
        
        res = max(res, int(L.size()));
    }
    
    cout << res;
    
    return 0;
}
