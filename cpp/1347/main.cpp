#include <iostream>

using namespace std;

int N;

string m;

bool maze[101][101] = { false, };

int l = 50, r = 50, t = 50, b = 50;

int x = 50, y = 50, d = 0;

int dx[4] = { 0, -1, 0, 1 };
int dy[4] = { 1, 0, -1, 0 };

int main()
{
    maze[50][50] = true;
    
    cin >> N;
    
    cin >> m;
    
    for(int i = 0; i < N; i++){
        if(m[i] == 'F'){
            x += dx[d];
            y += dy[d];
            
            l = min(l, x);
            r = max(r, x);
            
            t = min(t, y);
            b = max(b, y);
            
            maze[x][y] = true;
            
        }
        else if(m[i] == 'R') d = (d + 1) % 4;
        else d = (d > 0 ? d - 1 : 3);
    }
    
    for(int i = t; i <= b; i++){
        for(int j = l; j <= r; j++){
            cout << (maze[j][i] ? '.' : '#');
        }
        
        cout << '\n';
    }
    
    return 0;
}
