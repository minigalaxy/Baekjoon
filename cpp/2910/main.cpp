#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int N, C;

int M[1000];

map<int, int> cnt, idx;

vector<pair<pair<int, int>, int>> res;

int main()
{
    cin >> N >> C;
    
    for(int i = 0; i < N; i++){
        cin >> M[i];
        
        cnt[M[i]]++;
        
        if(idx.find(M[i]) == idx.end()) idx[M[i]] = i;
    }
    
    for(int i = 0; i < N; i++){
        res.push_back({ { -cnt[M[i]], idx[M[i]] }, M[i] });
    }
    
    sort(res.begin(), res.end());
    
    for(pair<pair<int, int>, int> r: res) cout << r.second << ' ';
    
    return 0;
}
