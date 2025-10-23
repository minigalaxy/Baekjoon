#include <iostream>

using namespace std;

int n, m;

char board[50][50];

int main()
{
    cin >> n >> m;
    cin.ignore();
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) board[i][j] = getchar();
        getchar();
    }
    
    for(int i = 1; i < n; i++){
        for(int j = n - 2; j >= 0; j--){
            for(int k = 0; k < m; k++){
                if(board[j][k] == 'o'){
                    if(board[j + 1][k] == '.'){
                        board[j][k] = '.';
                        board[j + 1][k] = 'o';
                    }
                }
            }
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) cout << board[i][j];
        cout << '\n';
    }
    
    return 0;
}
