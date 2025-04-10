#include <iostream>

#define MAX 60000000

using namespace std;

int N, M;

int A, B, C;

long long dist[501];

int edge[6000][3];

int main()
{
    cin >> N >> M;
    
    for(int i = 0; i < M; i++){
        cin >> A >> B >> C;
        
        edge[i][0] = A;
        edge[i][1] = B;
        edge[i][2] = C;
    }
    
    fill(dist + 1, dist + N + 1, MAX);
    
    dist[1] = 0;
    
    bool f = false;
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(dist[edge[j][0]] < MAX && dist[edge[j][0]] + edge[j][2] < dist[edge[j][1]]){
                dist[edge[j][1]] = dist[edge[j][0]] + edge[j][2];
                
                if(i == N - 1) f = true;
            }
        }
    }
    
    if(f) cout << -1;
    else {
        for(int i = 2; i <= N; i++){
            if(dist[i] == MAX) cout << "-1\n";
            else cout << dist[i] << '\n';
        }
    }
    
    return 0;
}
