#include <iostream>
#include <vector>

using namespace std;

long long R = 1000000007;

int D;

long long mem[30][8][8] = { 0, };

long long res[8] = { 1, };
long long tmp[8] = { 0, };

vector<int> edge[8];

int main()
{
    mem[0][0][1] = 1;
    mem[0][0][2] = 1;
    
    mem[0][1][0] = 1;
    mem[0][1][2] = 1;
    mem[0][1][3] = 1;
    
    mem[0][2][0] = 1;
    mem[0][2][1] = 1;
    mem[0][2][3] = 1;
    mem[0][2][4] = 1;
    
    mem[0][3][1] = 1;
    mem[0][3][2] = 1;
    mem[0][3][4] = 1;
    mem[0][3][5] = 1;
    
    mem[0][4][2] = 1;
    mem[0][4][3] = 1;
    mem[0][4][5] = 1;
    mem[0][4][6] = 1;
    
    mem[0][5][3] = 1;
    mem[0][5][4] = 1;
    mem[0][5][7] = 1;
    
    mem[0][6][4] = 1;
    mem[0][6][7] = 1;
    
    mem[0][7][5] = 1;
    mem[0][7][6] = 1;
    
    for(int i = 1; i < 30; i++){
        for(int j = 0; j < 8; j++){
            for(int k = 0; k < 8; k++){
                for(int l = 0; l < 8; l++){
                    mem[i][j][k] += mem[i - 1][j][l] * mem[i - 1][l][k];
                    mem[i][j][k] %= R;
                }
            }
        }
    }
    
    cin >> D;
    
    int n = 0;
    
    while(D > 0){
        if(D % 2 == 1){
            for(int i = 0; i < 8; i++){
                for(int j = 0; j < 8; j++){
                    tmp[j] += res[i] * mem[n][i][j];
                    tmp[j] %= R;
                }
            }
            
            for(int i = 0; i < 8; i++){
                res[i] = tmp[i];
                tmp[i] = 0;
            }
        }
            
        D /= 2;
            
        n++;
    }
    
    cout << res[0];
    
    return 0;
}
