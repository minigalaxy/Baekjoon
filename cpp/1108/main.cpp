#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

int N, M;

string W, W2, T;

map<string, string> P;
map<string, vector<string>> edge, redge;

map<string, bool> visited;
stack<string> visit_1;

set<string> WS;

map<string, int> group;
vector<string> group_l[2500];
int group_num = 0;
long long group_cnt[2500] = { 0, };
int group_indegree[2500] = { 0, };
vector<int> group_edge[2500];

map<string, long long> S;

void init_1(string cur){
    visited[cur] = true;
    
    for(string n: edge[cur]){
        if(!visited[n]) init_1(n);
    }
    
    visit_1.push(cur);
}

void con(string cur){
    visited[cur] = true;
    
    group[cur] = group_num;
    group_cnt[group_num]++;
    group_l[group_num].push_back(cur);
    
    for(string n: redge[cur]){
        if(!visited[n]) con(n);
    }
}

void init(string cur){
    visited[cur] = true;
    
    for(string n: edge[cur]){
        if(group[cur] != group[n]){
            group_indegree[group[n]]++;
            group_edge[group[cur]].push_back(group[n]);
        }
        
        if(!visited[n]) init(n);
    }
}

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> W;
        
        WS.insert(W);
        
        cin >> M;
        
        for(int j = 0; j < M; j++){
            cin >> W2;
            
            WS.insert(W2);
            
            edge[W2].push_back(W);
            redge[W].push_back(W2);
        }
    }
    
    cin >> T;
    
    for(string s: WS){
        if(!visited[s]) init_1(s);
    }
    
    visited.clear();
    
    while(!visit_1.empty()){
        string v = visit_1.top();
        visit_1.pop();
        
        if(!visited[v]){
            con(v);
            group_num++;
        }
    }
    
    visited.clear();
    
    for(string s: WS){
        if(!visited[s]) init(s);
    }
    
    queue<int> visit_2;
    
    for(int i = 0 ; i < group_num; i++){
        for(string m: group_l[i]) S[m] = 1;
            
        if(group_indegree[i] == 0) visit_2.push(i);
    }
    
    while(!visit_2.empty()){
        int v = visit_2.front();
        visit_2.pop();
        
        for(string m: group_l[v]){
            for(string n: edge[m]){
                if(group[m] != group[n]){
                    S[n] += S[m];
                }
            }
                
            if(m == T){
                cout << S[m];
                
                return 0;
            }
        }
        
        
        for(int n: group_edge[v]){
            if(--group_indegree[n] == 0) visit_2.push(n);
        }
    }
    
    return 0;
}
