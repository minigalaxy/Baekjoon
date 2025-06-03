#include <iostream>
#include <queue>

using namespace std;

int N, M, K;

int m[500][500];

int S;

int student[250001][2];

vector<int> edge[250001];

int dx[8] = { 0, 1, 1, 1, 0, -1, -1, -1 };
int dy[8] = { 1, 1, 0, -1, -1, -1, 0, 1 };

int dp[250001] = { 0, };

int dfs(int p, int c){
    dp[c] = 1;
    
    for(int n: edge[c]){
        if(n != p) dp[c] += dfs(c, n);
    }
    
    return dp[c];
}

int main()
{
    cin >> N >> M >> K;
    
    for(int i = 1; i <= K; i++){
        int X, Y;
        cin >> X >> Y;
        
        m[X - 1][Y - 1] = i;
        student[i][0] = X - 1;
        student[i][1] = Y - 1;
    }
    
    cin >> S;
    
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> visit;
    queue<pair<int, pair<int, int>>> will_visit;
    bool visited[500][500] = { false, };
    
    visited[student[S][0]][student[S][1]] = true;
    visit.push({ S, { student[S][0], student[S][1] } });
    
    while(!visit.empty()){
        for(int i = visit.size(); i > 0; i--){
            pair<int, pair<int, int>> v = visit.top();
            visit.pop();
            
            for(int j = 0; j < 8; j++){
                int nx = v.second.first + dx[j];
                int ny = v.second.second + dy[j];
                
                if(nx > -1 && nx < N && ny > -1 && ny < M && m[nx][ny] > 0 && !visited[nx][ny]){
                    visited[nx][ny] = true;
                    will_visit.push({ m[nx][ny], { nx, ny } });
                    edge[m[v.second.first][v.second.second]].push_back(m[nx][ny]);
                }
            }
        }
        
        while(!will_visit.empty()){
            visit.push(will_visit.front());
            will_visit.pop();
        }
    }
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(m[i][j] > 0 && !visited[i][j]){
                cout << -1;
                
                return 0;
            }
        }
    }
    
    dfs(0, S);
    
    for(int i = 1; i <= K; i++) cout << dp[i] << ' ';
    
    return 0;
}
