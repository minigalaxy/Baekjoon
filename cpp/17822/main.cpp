#include <iostream>

using namespace std;

int N, M, T;

int n[51][50], p[51] = { 0, };

int x, d, k;

int dx[4] = { 1, 0, 0, -1 };
int dy[4] = { 0, 1, -1, 0 };

int res = 0;

int main()
{
    cin >> N >> M >> T;
    
    for(int i = 1; i <= N; i++){
        for(int j = 0; j < M; j++){
            cin >> n[i][j];
        }
    }
    
    for(int i = 0; i < T; i++){
        cin >> x >> d >> k;
        
        for(int j = x; j <= N; j += x){
            if(d) p[j] -= k;
            else p[j] += k;
            
            p[j] = (p[j] + M) % M;
            
            //cout << j << '-' << k << "바퀴 회전 -> " << p[j] << '\n';
        }
        
        bool f = false, r[51][50] = { false, };
        
        for(int k = 0; k < M; k++){
            for(int l = 0; l < 3; l++){
                int nx = 1 + dx[l];
                int ny = (k + dy[l] - p[nx] + p[1] + M) % M;
                
                if(n[1][k] > 0 && n[1][k] == n[nx][ny]){
                    f = true;
                    r[1][k] = true;
                    r[nx][ny] = true;
                    
                    //cout << 1 << '-' << k << ' ' << n[1][k] << " 와 " << nx << '-' << ny << ' ' << n[nx][ny] << " 중복\n";
                }
            }
        }
        
        for(int j = 2; j < N; j++){
            for(int k = 0; k < M; k++){
                for(int l = 0; l < 4; l++){
                    int nx = j + dx[l];
                    int ny = (k + dy[l] - p[nx] + p[j] + M) % M;
                    
                    if(n[j][k] > 0 && n[j][k] == n[nx][ny]){
                        f = true;
                        r[j][k] = true;
                        r[nx][ny] = true;
                        
                        //cout << j << '-' << k << ' ' << n[j][k] << " 와 " << nx << '-' << ny << ' ' << n[nx][ny] << " 중복\n";
                    }
                }
            }
        }
        
        for(int k = 0; k < M; k++){
            for(int l = 1; l < 4; l++){
                int nx = N + dx[l];
                int ny = (k + dy[l] - p[nx] + p[N] + M) % M;
                
                if(n[N][k] > 0 && n[N][k] == n[nx][ny]){
                    f = true;
                    r[N][k] = true;
                    r[nx][ny] = true;
                    
                    //cout << N << '-' << k << ' ' << n[N][k] << " 와 " << nx << '-' << ny << ' ' << n[nx][ny] << " 중복\n";
                }
            }
        }
        
        if(f){
            for(int j = 1; j <= N; j++){
                for(int k = 0; k < M; k++){
                    if(r[j][k]){
                        n[j][k] = 0;
                    }
                }
            }
        } else {
             double avg = 0;
             int cnt = 0;
             int diff[51][50];
             
             for(int j = 1; j <= N; j++){
                for(int k = 0; k < M; k++){
                    if(n[j][k] > 0){
                        cnt++;
                        avg += n[j][k];
                    }
                }
             }
             
             avg /= cnt;
             
             for(int j = 1; j <= N; j++){
                for(int k = 0; k < M; k++){
                    if(n[j][k] > 0){
                        if(n[j][k] > avg) n[j][k]--;
                        else if(n[j][k] < avg) n[j][k]++;
                    }
                }
             }
        }
    }
    
    for(int j = 1; j <= N; j++){
        for(int k = 0; k < M; k++){
            res += n[j][k];
        }
     }
     
     cout << res;
    
    return 0;
}
