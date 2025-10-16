#include <iostream>
#include <vector>

using namespace std;

int V, E;

vector<int> edge[10'001];

int num[10'001] = { 0, }, low[10'001];

int counter = 0;

bool articulation_point[10'001] = { false, };

void dfs(int parent, int cur){
    low[cur] = num[cur] = ++counter;
    
    int child = 0;
    
    for(int next: edge[cur]){
        if(next != parent){d
            if(num[next] == 0){
                child++;
                    
                dfs(cur, next);
                
                if(parent && num[cur] <= low[next]) articulation_point[cur] = true;
                
                low[cur] = min(low[cur], low[next]);
            }
            else low[cur] = min(low[cur], num[next]);
        }
    }
    
    if(!parent && child >= 2) articulation_point[cur] = true; 
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> V >> E;
    
    for(int i = 0; i < E; i++){
        int A, B;
        cin >> A >> B;
        
        edge[A].push_back(B);
        edge[B].push_back(A);
    }
    
    for(int i = 1; i <= V; i++){
        if(num[i] == 0) dfs(0, i);
    }
    
    int res = 0;
    
    for(int i = 1; i <= V; i++){
        if(articulation_point[i]) res++;
    }
    
    cout << res << '\n';
    
    for(int i = 1; i <= V; i++){
        if(articulation_point[i]) cout << i << ' ';
    }
    
    return 0;
}
