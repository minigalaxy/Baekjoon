#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

int V, E;

vector<int> edge[10001], r_edge[10001], group[10001];

int group_num = 0;

bool visited[10001] = { false, };

stack<int> visit;

void init(int cur){
    visited[cur] = true;
    
    for(int n: edge[cur]){
        if(!visited[n]) init(n);
    }
    
    visit.push(cur);
}

void con(int cur){
    visited[cur] = true;
    
    group[group_num].push_back(cur);
    
    for(int n: r_edge[cur]){
        if(!visited[n]) con(n);
    }
}

int main()
{
    cin >> V >> E;
    
    for(int i = 0; i < E; i++){
        int A, B;
        cin >> A >> B;
    
        edge[A].push_back(B);
        r_edge[B].push_back(A);
    }
    
    for(int i = 1; i <= V; i++){
        if(!visited[i]) init(i);
    }
    
    fill(visited + 1, visited + V + 1, false);
    
    while(!visit.empty()){
        int v = visit.top();
        visit.pop();
        
        if(!visited[v]){
            con(v);
            group_num++;
        }
    }
    
    for(int i = 0; i < group_num; i++){
        sort(group[i].begin(), group[i].end());
    }
    
    sort(group, group + group_num);
    
    cout << group_num << '\n';
    
    for(int i = 0; i < group_num; i++){
        
            
        for(int v: group[i]) cout << v << ' ';
        
        cout << "-1 \n";
    }
    
    return 0;
}
