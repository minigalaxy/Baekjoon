#include <iostream>
#include <vector>

using namespace std;

const long long R = 1'000'000'007;

int T, N, D;

vector<pair<int, int>> edge[100][21];

long long m[101][21][21] = { 0, }, m2[27][21][21] = { 0, };

long long res[21][21] = { 0, };

int main()
{
    cin >> T >> N >> D;
    
    for(int i = 0; i < T; i++){
        int M;
        cin >> M;
    
        for(int j = 0; j < M; j++){
            int a, b, c;
            cin >> a >> b >> c;
            
            edge[i][a].push_back({ b, c });
        }
    }

    for(int i = 1; i <= N; i++){
        m[0][i][i] = 1;
    }
    
    for(int i = 0; i < T; i++){
        for(int j = 1; j <= N; j++){
            for(int k = 1; k <= N; k++){
                for(pair<int, int> n: edge[i][k]){
                    m[i + 1][j][n.first] += (m[i][j][k] * n.second) % R;
                    m[i + 1][j][n.first] %= R;
                }
            }
        }
    }
    
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            m2[0][i][j] = m[T][i][j];
        }
    }
    
    for(int i = 0; i < 26; i++){
        for(int j = 1; j <= N; j++){
            for(int k = 1; k <= N; k++){
                for(int l = 1; l <= N; l++){
                    m2[i + 1][j][l] += (m2[i][j][k] * m2[i][k][l]) % R;
                    m2[i + 1][j][l] %= R;
                }
            }
        }
    }
    
    int d = D / T, r = D % T;
    
    long long t[21][21] = { 0, };
    
    for(int i = 1; i <= N; i++){
        res[i][i] = 1;
    }
    
    for(int p = 0; p < 27 && d > 0; p++){
        if(d & 1){
            for(int i = 1; i <= N; i++){
                for(int j = 1; j <= N; j++){
                    for(int k = 1; k <= N; k++){
                        t[i][k] += (res[i][j] * m2[p][j][k]) % R;
                        t[i][k] %= R;
                    }
                }
            }
            
            for(int i = 1; i <= N; i++){
                for(int j = 1; j <= N; j++){
                    res[i][j] = t[i][j];
                    t[i][j] = 0;
                }
            }
        }
        
        d = d >> 1;
    }
    
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            for(int k = 1; k <= N; k++){
                t[i][k] += (res[i][j] * m[r][j][k]) % R;
                t[i][k] %= R;
            }
        }
    }
    
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            cout << t[i][j] << ' ';
        }
        
        cout << '\n';
    }
    
    return 0;
}
