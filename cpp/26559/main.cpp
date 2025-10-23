#include <iostream>
#include <algorithm>

using namespace std;

int n;

int m;

pair<int, string> f[500];

int main()
{
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> m;
    
        for(int j = 0; j < m; j++) cin >> f[j].second >> f[j].first;
        
        sort(f, f + m, greater<>());
        
        cout << f[0].second;
        
        for(int j = 1; j < m; j++) cout << ", " << f[j].second;
        
        cout << '\n';
    }
    
    
    return 0;
}
