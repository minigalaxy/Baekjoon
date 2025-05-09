#include <iostream>

using namespace std;

int N;

bool board[10][10] = { false, };

int score = 0, cnt = 0;

void remove_g(int y){
    for(int i = y; i >= 4; i--){
        for(int j = 0; j < 4; j++) board[j][i] = board[j][i - 1];
    }
}

void move_g_block(int x, int y, int t){
    if(t == 1){
        while(y + 1 < 10 && !board[x][y + 1]){
            board[x][y] = false;
            board[x][y + 1] = true;
            
            y++;
        }
        
        if(board[0][y] && board[1][y] && board[2][y] && board[3][y]){
            remove_g(y);
            
            score++;
        }
    } else if(t == 2){
        while(y + 1 < 10 && !board[x][y + 1] && !board[x + 1][y + 1]){
            board[x][y] = false;
            board[x][y + 1] = true;
            board[x + 1][y] = false;
            board[x + 1][y + 1] = true;
            
            y++;
        }
        
        if(board[0][y] && board[1][y] && board[2][y] && board[3][y]){
            remove_g(y);
            
            score++;
        }
    } else if(t == 3){
        while(y + 2 < 10 && !board[x][y + 2]){
            board[x][y] = false;
            board[x][y + 2] = true;
            
            y++;
        }
        
        if(board[0][y] && board[1][y] && board[2][y] && board[3][y]){
            remove_g(y);
            
            score++;
        }
        if(board[0][y + 1] && board[1][y + 1] && board[2][y + 1] && board[3][y + 1]){
            remove_g(y + 1);
            
            score++;
        }
    }
    
    while(board[0][5] || board[1][5] || board[2][5] || board[3][5]) remove_g(9);
}

void remove_b(int x){
    for(int i = x; i >= 4; i--){
        for(int j = 0; j < 4; j++) board[i][j] = board[i - 1][j];
    }
}

void move_b_block(int x, int y, int t){
    if(t == 1){
        while(x + 1 < 10 && !board[x + 1][y]){
            board[x][y] = false;
            board[x + 1][y] = true;
            
            x++;
        }
        
        if(board[x][0] && board[x][1] && board[x][2] && board[x][3]){
            remove_b(x);
            
            score++;
        }
    } else if(t == 2){
        while(x + 2 < 10 && !board[x + 2][y]){
            board[x][y] = false;
            board[x + 2][y] = true;
            
            x++;
        }
        
        if(board[x][0] && board[x][1] && board[x][2] && board[x][3]){
            remove_b(x);
            
            score++;
        }
        if(board[x + 1][0] && board[x + 1][1] && board[x + 1][2] && board[x + 1][3]){
            remove_b(x + 1);
            
            score++;
        }
    } else if(t == 3){
        while(x + 1 < 10 && !board[x + 1][y] && !board[x + 1][y + 1]){
            board[x][y] = false;
            board[x + 1][y] = true;
            board[x][y + 1] = false;
            board[x + 1][y + 1] = true;
            
            x++;
        }
        
        if(board[x][0] && board[x][1] && board[x][2] && board[x][3]){
            remove_b(x);
            
            score++;
        }
    }
    
    while(board[5][0] || board[5][1] || board[5][2] || board[5][3]) remove_b(9);
}

void spawn_block(int x, int y, int t){
    if(t == 1){
        board[x][y] = true;
        
        move_g_block(x, y, 1);
        
        board[x][y] = true;
        
        move_b_block(x, y, 1);
    } else if(t == 2){
        board[x][y] = true;
        board[x + 1][y] = true;
        
        move_g_block(x, y, 2);
        
        board[x][y] = true;
        board[x + 1][y] = true;
        
        move_b_block(x, y, 2);
    } else if(t == 3){
        board[x][y] = true;
        board[x][y + 1] = true;
        
        move_g_block(x, y, 3);
        
        board[x][y] = true;
        board[x][y + 1] = true;
        
        move_b_block(x, y, 3);
    }
}

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i++){
        int t, x, y;
        cin >> t >> x >> y;
        
        spawn_block(y, x, t);
        /*
        for(int j = 0; j < 10; j++){
            for(int k = 0; k < 10; k++) cout << ((board[k][j]) ? 'X' : 'O');
            cout << '\n';
        }
        cout << "�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�\n";
        **/
    }
    
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(board[6 + i][j]) cnt++;
            if(board[i][6 + j]) cnt++;
        }
    }
    
    cout << score << '\n' << cnt;
    
    return 0;
}
