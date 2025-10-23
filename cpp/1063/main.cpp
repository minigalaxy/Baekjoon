#include <iostream>

using namespace std;

string K, S;

int N;

struct Piece {
    int x, y;
};

Piece King, Stone;

void move_king(int dx, int dy){
    if(King.x + dx == Stone.x && King.y + dy == Stone.y){
        if(-1 < Stone.x + dx && Stone.x + dx < 8 && -1 < Stone.y + dy && Stone.y + dy < 8){
            King.x += dx;
            King.y += dy;
            
            Stone.x += dx;
            Stone.y += dy;
        }
    } else {
        if(-1 < King.x + dx && King.x + dx < 8 && -1 < King.y + dy && King.y + dy < 8){
            King.x += dx;
            King.y += dy;
        }
    }
}

int main()
{
    cin >> K >> S >> N;
    
    King.x = K[0] - 'A';
    King.y = K[1] - '1';
    
    Stone.x = S[0] - 'A';
    Stone.y = S[1] - '1';
    
    for(int i = 0; i < N; i++){
        string c;
        cin >> c;
        
        if(c == "R") move_king(1, 0);
        else if(c == "L") move_king(-1, 0);
        else if(c == "B") move_king(0, -1);
        else if(c == "T") move_king(0, 1);
        else if(c == "RT") move_king(1, 1);
        else if(c == "LT") move_king(-1, 1);
        else if(c == "RB") move_king(1, -1);
        else move_king(-1, -1);
    }
    
    cout << char(King.x + 'A') << char(King.y + '1') << '\n' << char(Stone.x + 'A') << char(Stone.y + '1');
    
    return 0;
}
