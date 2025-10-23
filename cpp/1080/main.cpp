#include <iostream>

using namespace std;

int N, M;

bool A[50][50], B[50][50];

int res = 0;

int main()
{
    cin >> N >> M;
    cin.ignore();
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++) A[i][j] = getchar() - '0';
        getchar();
    }
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++) B[i][j] = (A[i][j] == getchar() - '0');
        getchar();
    }
    
    for(int i = 0; i < N - 2; i++){
        for(int j = 0; j < M - 2; j++){
            if(!B[i][j]){
                res++;
                    
                for(int k = 0; k < 3; k++){
                    for(int l = 0; l < 3; l++){
                        B[i + k][j + l] = !B[i + k][j + l];
                    }
                }
            }
        }
    }
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(!B[i][j]){
                cout << -1;
                
                return 0;
            }
        }
    }
    
    cout << res;
    
    return 0;
}
