#include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;

int T;

int n, S;

int t[100'000], v[100'000];

map<int, vector<int>> M;
vector<pair<int, vector<int>>> V;

priority_queue<pair<int, int>> P;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> T;
    
    for(int i = 0; i < T; i++){
        long long res = 0;
        
        M.clear();
        V.clear();
    
        cin >> n >> S;
        
        for(int j = 0; j < n; j++) cin >> t[j];
        for(int j = 0; j < n; j++) cin >> v[j];
        
        for(int j = 0; j < n; j++) M[t[j]].push_back(v[j]);
        for(pair<int, vector<int>> p: M) V.push_back(p);
        
        int k = 0;
        
        while(V[k].first <= S && k < V.size()){
            for(int vt: V[k].second) P.push({ vt, V[k].first });
            
            k++;
        }
        
        if(k < V.size()){
            while(!P.empty() && S < V[k].first){
                res += 1LL * (S - P.top().second) * P.top().first;
                S++;
                P.pop();
            }
            
            for(int j = k; j < V.size() - 1; j++){
                S = V[j].first;
                
                for(int vt: V[j].second) P.push({ vt, S });
                
                while(!P.empty() && S < V[j + 1].first){
                    res += 1LL * (S - P.top().second) * P.top().first;
                    S++;
                    P.pop();
                }
            }
            
            S = V.back().first;
            
            for(int vt: V.back().second) P.push({ vt, S });
        }
        
        while(!P.empty()){
            res += 1LL * (S - P.top().second) * P.top().first;
            S++;
            P.pop();
        }
        
        cout << res << '\n';
    }
    
    return 0;
}
