#include <iostream>
#include <queue>

using namespace std;

struct Fireball {
    int m, s, d, turn;
};

int N, M, K;

queue<Fireball> F[50][50];

int dr[8] = { -1, -1, 0, 1, 1, 1, 0, -1 };
int dc[8] = { 0, 1, 1, 1, 0, -1, -1, -1 };

int res = 0;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> N >> M >> K;
    
    for(int i = 0; i < M; i++){
        int r, c, m, s, d;
        cin >> r >> c >> m >> s >> d;
        
        F[r - 1][c - 1].push({ m, s, d, -1 });
    }
    
    for(int i = 0; i < K; i++){
        for(int j = 0; j < N; j++){
            for(int k = 0; k < N; k++){
                for(int l = F[j][k].size(); l > 0; l--){
                    Fireball f = F[j][k].front();
                    F[j][k].pop();
                    
                    if(f.turn != i){
                        f.turn = i;
                        
                        F[(j + dr[f.d] * (f.s % N) + N) % N][(k + dc[f.d] * (f.s % N) + N) % N].push(f);
                    } else F[j][k].push(f);
                }
            }
        }
        
        for(int j = 0; j < N; j++){
            for(int k = 0; k < N; k++){
                if(F[j][k].size() >= 2){
                    int sum_m = 0, sum_s = 0, cnt = F[j][k].size(), oe = 0, p = -1;
                    
                    while(!F[j][k].empty()){
                        sum_m += F[j][k].front().m;
                        sum_s += F[j][k].front().s;
                        
                        if(F[j][k].front().d % 2 == p) oe++;
                        p = F[j][k].front().d % 2;
                        
                        F[j][k].pop();
                    }
                    
                    if(sum_m / 5 > 0){
                        if(oe == cnt - 1){
                            for(int l = 0; l < 4; l++) F[j][k].push({ sum_m / 5, sum_s / cnt, l * 2, -1 });
                        } else {
                            for(int l = 0; l < 4; l++) F[j][k].push({ sum_m / 5, sum_s / cnt, l * 2 + 1, -1 });
                        }
                    }
                }
            }
        }
    }
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            while(!F[i][j].empty()){
                res += F[i][j].front().m;
                
                F[i][j].pop();
            }
        }
    }
    
    cout << res;
    
    return 0;
}
