#include <iostream>
#include <queue>

using namespace std;

int N, K;

int M[200][200];

queue<pair<int, int>> V[1001];

int S, X, Y;

int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

int main()
{
    cin >> N >> K;
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> M[i][j];
            
            if(M[i][j] > 0){
                V[M[i][j]].push({ i, j });
            }
        }
    }
    
    cin >> S >> X >> Y;
    
    for(int i = 0; i < S; i++){
        for(int j = 1; j <= K; j++){
            for(int k = V[j].size(); k > 0; k--){
                pair<int, int> v = V[j].front();
                V[j].pop();
                
                for(int l = 0; l < 4; l++){
                    int nx = v.first + dx[l];
                    int ny = v.second + dy[l];
                    
                    if(nx > -1 && nx < N && ny > -1 && ny < N && M[nx][ny] == 0){
                        M[nx][ny] = j;
                        V[j].push({ nx, ny });
                    }
                }
            }
        }
    }
    
    cout << M[X - 1][Y - 1];
    
    return 0;
}
