#include <iostream>

using namespace std;

int N;

char P[100][100];

int res[2] = { 0, 0 };

int main()
{
    cin >> N;
    cin.ignore();
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            P[i][j] = getchar();
        }
        getchar();
    }
    
    for(int i = 0; i < N; i++){
        res[0] += (P[i][0] == '.') && (P[i][1] == '.');
        
        for(int j = 0; j < N - 2; j++){
            if(P[i][j] == 'X' && P[i][j + 1] == '.' && P[i][j + 2] == '.') res[0]++;
        }
    }
    
    for(int i = 0; i < N; i++){
        res[1] += (P[0][i] == '.') && (P[1][i] == '.');
        
        for(int j = 0; j < N - 2; j++){
            if(P[j][i] == 'X' && P[j + 1][i] == '.' && P[j + 2][i] == '.') res[1]++;
        }
    }
    
    cout << res[0] << ' ' << res[1];
    
    return 0;
}
