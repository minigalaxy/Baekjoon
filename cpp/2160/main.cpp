#include <iostream>

using namespace std;

int N;

bool pic[50][5][7];

int res[3] = { 0, 0, 36 };

int main()
{
    cin >> N;
    cin.ignore();
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < 5; j++){
            for(int k = 0; k < 7; k++) pic[i][j][k] = (getchar() == '.');
            getchar();
        }
    }
    
    for(int i = 0; i < N - 1; i++){
        for(int j = i + 1; j < N; j++){
            int t = 0;
            
            for(int k = 0; k < 5; k++){
                for(int l = 0; l < 7; l++){
                    if(pic[i][k][l] ^ pic[j][k][l]) t++;
                }
            }
            
            if(t < res[2]){
                res[0] = i;
                res[1] = j;
                res[2] = t;
            }
        }
    }
    
    cout << res[0] + 1 << ' ' << res[1] + 1;
    
    return 0;
}
