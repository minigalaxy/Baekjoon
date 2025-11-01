#include <iostream>
#include <cmath>

using namespace std;

int N, M;

int board[9][9];

int res = -1;

int main()
{
    cin >> N >> M;
    cin.ignore();
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            board[i][j] = getchar() - '0';
        }
        getchar();
    }
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            for(int k = -N; k < N; k++){
                for(int l = -M; l < M; l++){
                    if(k != 0 || l != 0){
                        int x = i, y = j, c = 0, f = 1;
                        
                        while(-1 < x && x < N && -1 < y && y < M){
                            c += board[x][y] * f;
                            
                            if(int(sqrt(c)) * int(sqrt(c)) == c) res = max(res, c);
                            
                            x += k;
                            y += l;
                            f *= 10;
                        }
                    }
                }
            }
        }
    }
    
    cout << res;
    
    return 0;
}
