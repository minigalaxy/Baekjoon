#include <iostream>
#include <queue>

using namespace std;

int N;

bool house[16][16];

int memory[16][16][3] = { 0, };

int dp(int x, int y, int d){
    if(memory[x][y][d] > 0) return memory[x][y][d];

    for(int i = d - 1; i <= d + 1; i++){
        if(i == 0 && x + 1 < N && !house[x + 1][y]) memory[x][y][d] += dp(x + 1, y, 0);
        else if(i == 2 && y + 1 < N && !house[x][y + 1]) memory[x][y][d] += dp(x, y + 1, 2);
        else if(i == 1 && x + 1 < N && y + 1 < N && !house[x + 1][y] && !house[x][y + 1] && !house[x + 1][y + 1]) memory[x][y][d] += dp(x + 1, y + 1, 1);
    }

    return memory[x][y][d];
}

int main()
{
    cin >> N;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++) cin >> house[j][i];
    }

    for(int i = 0; i <= 2; i++) memory[N - 1][N - 1][i] = 1;

    dp(1, 0, 0);

    cout << memory[1][0][0];

    return 0;
}
