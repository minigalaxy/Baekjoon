#include <iostream>
#include <stack>
#include <tuple>

using namespace std;

int board[9][9];

stack<pair<int, int>> blank;

bool chk(int x, int y, int v){
    for(int i = 0; i < 9; i++){
        if(board[x][i] == v || board[i][y] == v || board[(x / 3) * 3 + i % 3][(y / 3) * 3 + i / 3] == v) return false;
    }

    return true;
}

bool bt(){
    if(blank.empty()){
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++) cout << board[i][j];

            cout << '\n';
        }

        return true;
    }

    int x, y;
    tie(x, y) = blank.top();
    blank.pop();

    for(int i = 1; i <= 9; i++){
        if(chk(x, y, i)){
            board[x][y] = i;
            if(bt()) return true;
        }
    }

    board[x][y] = 0;
    blank.push(make_pair(x, y));

    return false;
}

int main()
{
    stack<pair<int, int>> blank_t;

    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            board[i][j] = getchar() - '0';

            if(board[i][j] == 0) blank_t.push(make_pair(i, j));
        }
        getchar();
    }

    while(!blank_t.empty()){
        blank.push(blank_t.top());
        blank_t.pop();
    }

    bt();

    return 0;
}
