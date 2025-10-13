#include <iostream>
#include <vector>
#include <bitset>

using namespace std;

int C;

int N, M;

bool desk[10][10] = { false, };

vector<vector<bool>> comb;

int m[10][1 << 10];

void init(int i, vector<bool> &tmp){
    if(i == M){
        comb.push_back(tmp);
        
        return;
    }
    
    tmp.push_back(false);
    init(i + 1, tmp);
    tmp.pop_back();
    
    if(i > 0 && tmp.back()) return;
    
    tmp.push_back(true);
    init(i + 1, tmp);
    tmp.pop_back();
}

int dp(int l, int bb){
    if(l == N) return 0;
    
    int ret = 0;
    
    for(vector<bool> ch: comb){
        int cb = 0;
        int cnt = 0;
        
        for(int i = 0; i < M; i++){
            if(ch[i] && desk[N - 1 - l][i]){
                if(i > 0 && (bb & (1 << (i - 1)))) continue;
                if(i < M - 1 && (bb & (1 << (i + 1)))) continue;
                
                cb |= (1 << i);
                cnt++;
            }
        }
        
        if(m[l][cb] == -1) m[l][cb] = dp(l + 1, cb) + cnt;
        
        ret = max(ret, m[l][cb]);
    }
    
    return ret;
}

void solve(){
    fill(m[0], m[10], -1);
    comb.clear();
    
    vector<bool> t;
    init(0, t);
    
    cout << dp(0, 0) << '\n';
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> C;
    
    for(int i = 0; i < C; i++){
        cin >> N >> M;
        cin.ignore();
        
        for(int j = 0; j < N; j++){
            for(int k = 0; k < M; k++){
                desk[j][k] = (getchar() == '.');
            }
            getchar();
        }
        
        solve();
    }
    
    return 0;
}
