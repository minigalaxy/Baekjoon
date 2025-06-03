#include <iostream>
#include <queue>

using namespace std;

int N, M;

string s[500];

queue<pair<int, int>> visit;
bool visited[500][500] = { false, };

int m[500][500] = { 0, };

int res = 0;

int main()
{
    cin >> N >> M;
    
    for(int i = 0; i < N; i++) cin >> s[i];
    
    visit.push({ 0, 0 });
    
    while(!visit.empty()){
        pair<int, int> v = visit.front();
        visit.pop();
        
        if(v.first - 1 > -1) m[v.first][v.second] = max(m[v.first][v.second], m[v.first - 1][v.second]);
        if(v.second - 1 > -1) m[v.first][v.second] = max(m[v.first][v.second], m[v.first][v.second - 1]);
        
        if(s[v.first][v.second] == 'o') m[v.first][v.second]++;
        
        res = max(res, m[v.first][v.second]);
        
        if(v.first + 1 < N && s[v.first + 1][v.second] != 'x' && !visited[v.first + 1][v.second]){
            visited[v.first + 1][v.second] = true;
            visit.push({ v.first + 1, v.second });
        }
        if(v.second + 1 < M && s[v.first][v.second + 1] != 'x' && !visited[v.first][v.second + 1]){
            visited[v.first][v.second + 1] = true;
            visit.push({ v.first, v.second + 1 });
        }
    }
    
    cout << res;
    
    return 0;
}
