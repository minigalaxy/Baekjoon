#include <iostream>
#include <algorithm>

using namespace std;

int dx[8] = { 0, -1, -1, -1, 0, 1, 1, 1 };
int dy[8] = { -1, -1, 0, 1, 1, 1, 0, -1 };

struct fish {
    int x, y, d;
    bool alive;
};

int board[4][4];

fish fishes[17];

int shk[3];

void move_fish(){
    for(int i = 1; i <= 16; i++){
        fish &f = fishes[i];
        
        if(f.alive){
            for(int j = 0; j < 8; j++){
                int nx = f.x + dx[f.d];
                int ny = f.y + dy[f.d];
                
                if(nx > -1 && nx < 4 && ny > -1 && ny < 4){
                    if(board[nx][ny] == 0){
                        board[nx][ny] = board[f.x][f.y];
                        board[f.x][f.y] = 0;
                        f.x = nx;
                        f.y = ny;
                        
                        break;
                    } else if(board[nx][ny] > 0){
                        int tx = f.x, ty = f.y;
                        
                        swap(fishes[board[nx][ny]].x, f.x);
                        swap(fishes[board[nx][ny]].y, f.y);
                        swap(board[nx][ny], board[tx][ty]);
                        
                        break;
                    }
                }
                
                f.d = (f.d + 1) % 8;
            }
        }
    }
}

int dfs(){
    fish tf[17];
    int tb[4][4];
    int ts[3] = { shk[0], shk[1], shk[2] };
    
    for(int i = 1; i <= 16; i++) tf[i] = fishes[i];
    for(int i = 0; i < 4; i++) for(int j = 0; j < 4; j++) tb[i][j] = board[i][j];
    
    int tmp = 0;
    
    for(int i = 1; i < 4; i++){
        int nx = shk[0] + dx[shk[2]] * i;
        int ny = shk[1] + dy[shk[2]] * i;
            
        if(nx > -1 && nx < 4 && ny > -1 && ny < 4 && board[nx][ny] > 0){
            board[shk[0]][shk[1]] = 0;
                
            shk[0] = nx;
            shk[1] = ny;
            shk[2] = fishes[board[nx][ny]].d;
            
            fishes[board[nx][ny]].alive = false;
            
            int t = board[nx][ny];
            
            board[nx][ny] = -1;
            
            move_fish();
                
            tmp = max(tmp, dfs() + t);
        
            for(int j = 1; j <= 16; j++) fishes[j] = tf[j];
            for(int j = 0; j < 4; j++) for(int k = 0; k < 4; k++) board[j][k] = tb[j][k];
            
            shk[0] = ts[0];
            shk[1] = ts[1];
            shk[2] = ts[2];
        }
    }
    
    return tmp;
}

int main()
{
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            int a, b;
            cin >> a >> b;
            
            board[j][i] = a;
            fishes[a] = { j, i, b - 1, true };
        }
    }
    
    
    
    shk[0] = shk[1] = 0;
    shk[2] = fishes[board[0][0]].d;
    
    int s = board[0][0];
    
    fishes[board[0][0]].alive = false;
    board[0][0] = -1;
    
    move_fish();
    
    cout << dfs() + s;
    
    return 0;
}
