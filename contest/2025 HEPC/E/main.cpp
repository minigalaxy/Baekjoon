#include <iostream>

using namespace std;

int N, M;

int R, C;

int board[1000][1000];

int planner[9][9];

int res = 0;

int main()
{
    cin >> N >> M >> R >> C;
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++) cin >> board[i][j];
    }
    
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++) cin >> planner[i][j];
    }
    
    for(int i = 0; i <= N - R; i++){
        for(int j = 0; j <= M - C; j++){
            int c = board[i][j] - planner[0][0];
            bool flag = true;
                
            for(int k = 0; k < R; k++){
                for(int l = 0; l < C; l++){
                    if(c != board[i + k][j + l] - planner[k][l]) flag = false;
                }
            }
            
            if(flag) res++;
        }
    }
    
    cout << res;
    
    return 0;
}
