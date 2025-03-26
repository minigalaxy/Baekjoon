#include <iostream>
#include <deque>

using namespace std;

int N, K;

//white = 0, red = 1, blue = 2
int board[12][12];

int piece[10][4];

int dr[5] = { 0, 0, 0, -1, 1 };
int dc[5] = { 0, 1, -1, 0, 0 };

deque<int> tower[12][12];

bool move_piece(int p, int nr, int nc){
    deque<int> tmp;

    int r = piece[p][0], c = piece[p][1];

    while(true){
        int t = tower[r][c].back();
        tower[r][c].pop_back();

        tmp.push_front(t);

        if(t == p) break;
    }

    if(board[nr][nc] == 1){
        while(!tmp.empty()){
            int t = tmp.back();
            tmp.pop_back();

            tower[nr][nc].push_back(t);
            piece[t][0] = nr;
            piece[t][1] = nc;
        }
    } else {
        while(!tmp.empty()){
            int t = tmp.front();
            tmp.pop_front();

            tower[nr][nc].push_back(t);
            piece[t][0] = nr;
            piece[t][1] = nc;
        }
    }

    return (tower[nr][nc].size() >= 4);
}

bool turn(){
    for(int i = 0; i < K; i++){
        int nr = piece[i][0] + dr[piece[i][2]];
        int nc = piece[i][1] + dc[piece[i][2]];

        if(nr < 0 || nr >= N || nc < 0 || nc >= N || board[nr][nc] == 2){
            if(piece[i][2] <= 2) piece[i][2] = 3 - piece[i][2];
            else piece[i][2] = 7 - piece[i][2];

            nr = piece[i][0] + dr[piece[i][2]];
            nc = piece[i][1] + dc[piece[i][2]];

            if(nr > -1 && nr < N && nc > -1 && nc < N && board[nr][nc] != 2){
                if(move_piece(i, nr, nc)) return true;
            }
        } else {
            if(move_piece(i, nr, nc)) return true;
        }
    }

    return false;
}

int main()
{
    cin >> N >> K;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> board[i][j];
        }
    }

    for(int i = 0; i < K; i++){
        cin >> piece[i][0] >> piece[i][1] >> piece[i][2];
        piece[i][0]--;
        piece[i][1]--;

        tower[piece[i][0]][piece[i][1]].push_back(i);
    }

    for(int i = 1; i <= 1000; i++){
        if(turn()){
            cout << i;

            return 0;
        }
    }

    cout << -1;

    return 0;
}
