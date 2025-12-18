#include <iostream>
#include <algorithm>

using namespace std;

int T;

pair<int, int> d[4];

int ds(pair<int, int> a, pair<int, int> b){
    return (a.first - b.first) * (a.first - b.first) + (a.second - b.second) * (a.second - b.second);
}

int main()
{
    cin >> T;
    
    for(int i = 0; i < T; i++){
        for(int j = 0; j < 4; j++) cin >> d[j].first >> d[j].second;
        
        sort(d, d + 4);
        
        cout << (ds(d[0], d[1]) == ds(d[0], d[2]) && ds(d[0], d[1]) == ds(d[1], d[3]) && ds(d[0], d[2]) == ds(d[2], d[3]) && ds(d[0], d[1]) + ds(d[0], d[2]) == ds(d[1], d[2])) << '\n';
    }
    
    return 0;
}
