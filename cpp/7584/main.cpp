#include <iostream>

using namespace std;

char t;

bool cur = false;

int board[3][3];

void chk(){
    for(int i = 0; i < 3; i++){
        if(board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != 2){
            cout << ((board[i][0]) ? 'O' : 'X') << '\n';
            return;
        }
        if(board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != 2){
            cout << ((board[0][i]) ? 'O' : 'X') << '\n';
            return;
        }
    }

    if(board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != 2){
        cout << ((board[0][0]) ? 'O' : 'X') << '\n';
        return;
    }
    if(board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != 2){
        cout << ((board[0][2]) ? 'O' : 'X') << '\n';
        return;
    }

    cout << "Draw\n";
}

int main()
{
    fill(board[0], board[3], 2);

    cin >> t;

    cur = (t == 'O');

    while(true){
        cin >> t;

        if(t == '#'){
            chk();
            break;
        } else if(t == 'X'){
            chk();
            fill(board[0], board[3], 2);
            cur = false;
        } else if(t == 'O'){
            chk();
            fill(board[0], board[3], 2);
            cur = true;
        } else {
            t -= '1';
            board[t % 3][t / 3] = cur;
            cur = !cur;
        }
    }
    return 0;
}
