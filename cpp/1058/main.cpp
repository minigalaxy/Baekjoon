#include <iostream>

using namespace std;

int N;

int f[50][50] = { 0, };

int res = 0;

int main()
{
    cin >> N;
    cin.ignore();
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(getchar() == 'Y') f[i][j] = 1;
            else f[i][j] = 50;
;        }
        getchar();
    }
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            for(int k = 0; k < N; k++){
                f[j][k] = min(f[j][k], f[j][i] + f[i][k]);
            }
        }
    }
    
    for(int i = 0; i < N; i++){
        int t = 0;
            
        for(int j = 0; j < N; j++){
            if(f[i][j] <= 2 && i != j) t++;
        }
        
        res = max(t, res);
    }
    
    cout << res;
    
    return 0;
}
