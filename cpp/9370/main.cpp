#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int T;

int n, m, t;

int s, g, h;

int a, b, d;

vector<pair<int, int>> edge[2001];

vector<int> x;

struct art
{
    int d;
    int c;
    bool p;
};

struct compare
{
    bool operator()(art &a, art &b){
        if(a.d == b.d) return b.p;
        
        return a.d > b.d;
    }
};


int main()
{
    cin >> T;
    
    for(int i = 0; i < T; i++){
        cin >> n >> m >> t;
        
        cin >> s >> g >> h;
        
        for(int j = 1; j <= n; j++) edge[j].clear();
        
        x.clear();
        
        for(int j = 0; j < m; j++){
            cin >> a >> b >> d;
            
            edge[a].push_back({ b, d });
            edge[b].push_back({ a, d });
        }
        
        for(int j = 0; j < t; j++){
            int tmp;
            cin >> tmp;
            
            x.push_back(tmp);
        }
        
        sort(x.begin(), x.end());
        
        vector<int> res;
        
        int dist[2001];
        bool flag[2001] = { false, };
        
        fill(dist + 1, dist + n + 1, 100000000);
        
        priority_queue<art, vector<art>, compare> visit;
        
        visit.push({ 0, s, false });
        
        while(!visit.empty()){
            art v = visit.top();
            visit.pop();
            
            if(v.d >= dist[v.c]) continue;
            
            dist[v.c] = v.d;
            flag[v.c] = v.p;
            
            for(pair<int, int> p: edge[v.c]){
                if(dist[v.c] + p.second < dist[p.first]){
                    if((v.c == g && p.first == h) || (v.c == h && p.first == g)) visit.push({ dist[v.c] + p.second, p.first, true });
                    else visit.push({ dist[v.c] + p.second, p.first, v.p });
                }
            }
        }
        
        for(int tmp: x){
            if(flag[tmp]) cout << tmp << ' ';
        }
        
        cout << '\n';
    }
    
    return 0;
}
