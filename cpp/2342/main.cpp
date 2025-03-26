#include <iostream>

#define MAX 400000

using namespace std;

int command;

int memory[100001][5][5];

int res = MAX;

int cost(int a, int b){
    if(a == b) return 1;

    if(a == 0) return 2;
    else if(a == 1){
        if(b == 4 || b == 2) return 3;
        else return 4;
    } else if(a == 2){
        if(b == 1 || b == 3) return 3;
        else return 4;
    } else if(a == 3){
        if(b == 2 || b == 4) return 3;
        else return 4;
    } else if(a == 4){
        if(b == 3 || b == 1) return 3;
        else return 4;
    }
}

int main()
{
    fill(memory[0][0], memory[100001][0], MAX);

    memory[0][0][0] = 0;

    for(int i = 1; i <= 100001; i++){
        cin >> command;

        if(command == 0){
            for(int j = 0; j < 5; j++){
                for(int k = 0; k < 5; k++){
                    res = min(res, memory[i - 1][j][k]);
                }
            }

            break;
        }

        for(int l = 0; l < 5; l++){
            for(int r = 0; r < 5; r++){
                if(memory[i - 1][l][r] < MAX){
                    if(command != r) memory[i][command][r] = min(memory[i][command][r], memory[i - 1][l][r] + cost(l, command));
                    if(command != l) memory[i][l][command] = min(memory[i][l][command], memory[i - 1][l][r] + cost(r, command));
                }
            }
        }
    }

    cout << res;

    return 0;
}
