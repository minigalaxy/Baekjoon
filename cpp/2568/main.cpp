#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N;

vector<pair<int, int>> wire;

vector<pair<int, int>> lis;

int parent[500001];

bool connected[500001] = { false, };

bool compare(const pair<int, int> &a, const pair<int, int> &b){
    return a.second < b.second;
}

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        int A, B;
        cin >> A >> B;
        
        wire.push_back({ A, B });
    }
    
    sort(wire.begin(), wire.end());
    
    for(int i = 1; i <= 500000; i++) parent[i] = i;
    
    lis.push_back(wire.front());
    
    for(int i = 1; i < N; i++){
        if(wire[i].second > lis.back().second){
            parent[wire[i].first] = lis.back().first;
            lis.push_back(wire[i]);
        } else {
            int idx = lower_bound(lis.begin(), lis.end(), wire[i], compare) - lis.begin();
            
            lis[idx] = wire[i];
            
            if(idx > 0) parent[wire[i].first] = lis[idx - 1].first;
        }
    }
    
    cout << N - lis.size() << '\n';
    
    int k = lis.back().first;
    
    connected[k] = true;
    
    while(parent[k] != k){
        k = parent[k];
        connected[k] = true;
    }
    
    for(int i = 0; i < N; i++){
        if(!connected[wire[i].first]) cout << wire[i].first << '\n';
    }
    
    return 0;
}
