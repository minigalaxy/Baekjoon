#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int N, M, K;

int c[30001];

vector<int> fr[30001];

bool visited[30001] = { false, };

vector<pair<int, int>> gr;

int m[30001][3000];

void bfs(int n){
    queue<int> visit;
    
    visit.push(n);
    visited[n] = true;
    
    int candy = 0, cnt = 0;
    
    while(!visit.empty()){
        int v = visit.front();
        visit.pop();
        
        candy += c[v];
        cnt++;
        
        for(int n: fr[v]){
            if(!visited[n]){
                visit.push(n);
                visited[n] = true;
            }
        }
    }
    
    if(cnt < K) gr.push_back({ candy, cnt });
}

int ks(){
    for(int i = 1; i <= gr.size(); i++){
        for(int j = 0; j < K; j++){
            if(gr[i - 1].second > j) m[i][j] = m[i - 1][j];
            else m[i][j] = max(m[i - 1][j], gr[i - 1].first + m[i - 1][j - gr[i - 1].second]);
        }
    }
    
    int res = 0;
    
    for(int i = 0; i < K; i++) res = max(res, m[gr.size()][i]);
    
    return res;
}

int main()
{
    cin >> N >> M >> K;
    
    for(int i = 1; i <= N; i++) cin >> c[i];
    
    for(int i = 0; i < M; i++){
        int a, b;
        cin >> a >> b;
        
        fr[a].push_back(b);
        fr[b].push_back(a);
    }
    
    for(int i = 1; i <= N; i++){
        if(!visited[i]) bfs(i);
    }
    
    cout << ks();
    
    return 0;
}
