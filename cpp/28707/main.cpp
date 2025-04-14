#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;

int N;

string A, B;

int M;

int l, r, c;

struct mp {
    int l, r, c;
};

vector<mp> mps;

unordered_map<string, int> dist;

priority_queue<pair<int, string>, vector<pair<int, string>>, greater<pair<int, string>>> visit;

int res = -1;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> N;
    
    for(int i = 0; i < N; i++){
        int t;
        cin >> t;
        
        A.push_back('0' + t - 1);
    }
    
    B = A;
    
    sort(B.begin(), B.end());
    
    cin >> M;
    
    for(int i = 0; i < M; i++){
        cin >> l >> r >> c;
        
        mps.push_back({ l - 1, r - 1, c });
    }
    
    visit.push({ 0, A });
    
    while(!visit.empty()){
        pair<int, string> p = visit.top();
        visit.pop();
        
        if(p.second == B){
            res = p.first;
            break;
        }
        
        for(mp m: mps){
            swap(p.second[m.l], p.second[m.r]);
        
            if(dist.find(p.second) == dist.end() || p.first + m.c < dist[p.second]){
                dist[p.second] = p.first + m.c;
                visit.push({ dist[p.second], p.second });
            }
            
            swap(p.second[m.l], p.second[m.r]);
        }
    }
    
    cout << res;
    
    return 0;
}
