#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

int N;

int A[1000000];

int parent[1000000];

vector<pair<int, int>> lis;

bool compare(const pair<int, int> &a, const pair<int, int> &b){
    return a.second < b.second;
}

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++) cin >> A[i];
    
    for(int i = 0; i < N; i++) parent[i] = i;
    
    lis.push_back({ 0, A[0] });
    
    for(int i = 1; i < N; i++){
        if(A[i] > lis.back().second){
            parent[i] = lis.back().first;
            lis.push_back({ i, A[i] });
        } else {
            int idx = lower_bound(lis.begin(), lis.end(), make_pair(i, A[i]), compare) - lis.begin();
            
            lis[idx] = make_pair(i, A[i]);
            
            if(idx > 0) parent[i] = lis[idx - 1].first;
        }
    }
    
    cout << lis.size() << '\n';
    
    stack<int> res;
    
    int k = lis.back().first;
    
    res.push(k);
    
    while(parent[k] != k){
        k = parent[k];
        res.push(k);
    }
    
    while(!res.empty()){
        cout << A[res.top()] << ' ';
        res.pop();
    }
    
    return 0;
}
