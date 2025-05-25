#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M;

double edge[201][201];

vector<pair<int, int>> edge_v[201];

double res[201] = { 0, };

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> N >> M;
    
    fill(edge[0], edge[201], 2000000);
    
    for(int i = 1; i <= N; i++) edge[i][i] = 0;
    
    for(int i = 0; i < M; i++){
        int S, E;
        double L;
        cin >> S >> E >> L;
        
        edge[S][E] = min(edge[S][E], L);
        edge[E][S] = min(edge[E][S], L);
        
        edge_v[S].push_back({ E, L });
        edge_v[E].push_back({ S, L });
    }
    
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            for(int k = 1; k <= N; k++){
                edge[j][k] = min(edge[j][k], edge[j][i] + edge[i][k]);
            }
        }
    }
    
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            for(pair<int, int> p: edge_v[j]){
                double d = abs(edge[i][j] - edge[i][p.first]);
                    
                if(d < p.second) res[i] = max(res[i], edge[i][j] + (p.second - d) / 2);
                else res[i] = max(res[i], edge[i][j]);
            }
        }
    }
    
    cout.precision(1);
    cout << fixed << *min_element(res + 1, res + 1 + N);
    
    return 0;
}
