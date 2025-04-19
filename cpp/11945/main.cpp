#include <iostream>

using namespace std;

int N, M;

bool b[10][10];

int main()
{
    cin >> N >> M;
    cin.ignore();
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++) b[i][j] = getchar() - '0';
        getchar();
    }
    
    for(int i = 0; i < N; i++){
        for(int j = M - 1; j >= 0; j--) cout << b[i][j];
        cout << '\n';
    }
    
    return 0;
}

