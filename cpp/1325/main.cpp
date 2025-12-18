#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M;

vector<int> node[10'001];

bool visited[10'001] = { false, };

vector<pair<int, int>> res;

int bfs(int cur){
    visited[cur] = true;
    
    int ret = 1;
    
    for(int next: node[cur]) if(!visited[next]) ret += bfs(next);
        
    return ret;
}

int main()
{
    cin >> N >> M;
    
    for(int i = 0; i < M; i++){
        int A, B;
        cin >> A >> B;
        
        node[B].push_back(A);
    }
    
    for(int i = 1; i <= N; i++){
        res.push_back({ -bfs(i), i });
        fill(visited + 1, visited + N + 1, false);
    }
    
    sort(res.begin(), res.end());
    
    for(int i = 0; i < res.size(); i++){
        if(res[i].first == res[0].first) cout << res[i].second << ' ';
        else break;
    }
    
    return 0;
}
