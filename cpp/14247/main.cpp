#include <iostream>
#include <algorithm>

using namespace std;

int n;

pair<int, int> tree[100'000];

long long res = 0;

int main()
{
    cin >> n;
    
    for(int i = 0; i < n; i++) cin >> tree[i].second;
    for(int i = 0; i < n; i++) cin >> tree[i].first;
    
    sort(tree, tree + n);
    
    for(int i = 0; i < n; i++){
        res += tree[i].second + tree[i].first * i;
    }
    
    cout << res;
    
    return 0;
}
