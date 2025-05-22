#include <iostream>
#include <set>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

int N;

int M[500000], S[500000];

long long merge(int l, int r, int m){
    int i = l, j = m + 1, k = l;
    long long res = 0;
    
    while(i <= m && j <= r){
        if(M[i] <= M[j]) S[k++] = M[i++];
        else {
            res += m - i + 1;
            
            S[k++] = M[j++];
        }
    }
    
    while(i <= m) S[k++] = M[i++];
    while(j <= r) S[k++] = M[j++];
    
    for(int i = l; i <= r; i++) M[i] = S[i];
    
    return res;
}

long long merge_sort(int l, int r){
    if(l == r) return 0;
    
    int m = (l + r) / 2;
    
    return merge_sort(l, m) + merge_sort(m + 1, r) + merge(l, r, m);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> N;
    
    {
        unordered_map<int, pair<int, int>> I;
        
        for(int i = 0; i < N; i++){
            int a;
            cin >> a;
            
            I[a].first = i;
        }
        
        for(int i = 0; i < N; i++){
            int b;
            cin >> b;
            
            I[b].second = i;
        }
        
        int i = 0;
        
        for(pair<int, pair<int, int>> p: I) M[p.second.first] = p.second.second;
    }
    
    cout << merge_sort(0, N - 1);
    
    return 0;
}
