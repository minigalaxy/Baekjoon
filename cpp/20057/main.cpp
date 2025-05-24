#include <iostream>

using namespace std;

int N;

int A[499][499];

int T[5];

int R[10][3] = { 
{ 0, -2, 5 },
{ 1, -1, 10 },
{ 1, 0, 7 },
{ 2, 0, 2 },
{ 1, 1, 1 },
{ -1, -1, 10 },
{ -1, 0, 7 },
{ -2, 0, 2 },
{ -1, 1, 1 },
{ 0, -1, 0 }
};

int res = 0;

int main()
{
    cin >> N;
    
    T[0] = T[1] = N / 2;
    T[2] = T[3] = 0;
    T[4] = 0;
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> A[i][j];
        }
    }
    
    while(true){
        if(T[4] % 2 == 0) T[3]++;
        else T[2]++;
        
        for(int i = 0; i < ((T[4] % 2 == 0) ? T[3] : T[2]); i++){
            if(T[4] == 0) T[1]--;
            else if(T[4] == 1) T[0]++;
            else if(T[4] == 2) T[1]++;
            else T[0]--;
            
            if(T[0] >= N || T[0] <= -1 || T[1] >= N || T[1] <= -1){
                cout << res;
                
                return 0;
            }
            
            int sum = 0;
            
            for(int j = 0; j < 10; j++){
                int nr = T[0];
                int nc = T[1];
                
                if(T[4] == 0){ nr += R[j][0]; nc += R[j][1]; }
                else if(T[4] == 1){ nr -= R[j][1]; nc += R[j][0]; }
                else if(T[4] == 2){ nr += R[j][0]; nc -= R[j][1]; }
                else { nr += R[j][1]; nc += R[j][0]; }
                
                int q = A[T[0]][T[1]] * R[j][2] / 100;
                
                if(j == 9) q = A[T[0]][T[1]] - sum;
                
                sum += q;
                
                if(nr >= N || nr <= -1 || nc >= N || nc <= -1) res += q;
                else A[nr][nc] += q;
            }
            
            A[T[0]][T[1]] = 0;
        }
        
        T[4] = (T[4] + 1) % 4;
    }
    
    return 0;
}
