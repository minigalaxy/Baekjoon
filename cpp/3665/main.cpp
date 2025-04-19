#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int T;

int n;

int t[501];

int m;

int a, b;

bool edge[501][501] = { false, };
int indegree[501] = { 0, };

vector<int> res;

int main()
{
    cin >> T;
    
    for(int i = 0; i < T; i++){
        cin >> n;
    
        for(int j = 1; j <= n; j++) cin >> t[j];
        
        fill(edge[0], edge[501], false);
        fill(indegree, indegree + 501, 0);
        
        res.clear();
        
        for(int j = 1; j < n; j++){
            for(int k = j + 1; k <= n; k++){
                edge[t[j]][t[k]] = true;
                indegree[t[k]]++;
            }
        }
        
        cin >> m;
        
        for(int j = 0; j < m; j++){
            cin >> a >> b;
            
            if(edge[a][b]){
                edge[a][b] = 0;
                indegree[b]--;
                edge[b][a] = 1;
                indegree[a]++;
            } else {
                edge[b][a] = 0;
                indegree[a]--;
                edge[a][b] = 1;
                indegree[b]++;
            }
        }
        
        queue<int> visit;
        
        for(int j = 1; j <= n; j++){
            if(indegree[j] == 0) visit.push(j);
        }
        
        bool ic = true, ip = true;
        
        while(!visit.empty() && ic && ip){
            int v = visit.front();
            visit.pop();
            
            if(visit.size() >= 2) ic = false;
            if(res.size() > n) ip = false;
                
            res.push_back(v);
            
            for(int j = 1; j <= n; j++){
                if(edge[v][j]){
                    if(--indegree[j] == 0){
                        visit.push(j);
                    }
                }
            }
        }
        
        if(res.size() != n) ip = false;
        
        if(!ic) cout << '?';
        else if(!ip) cout << "IMPOSSIBLE";
        else for(int r: res) cout << r << ' ';
        
        cout << '\n';
    }
    
    return 0;
}
