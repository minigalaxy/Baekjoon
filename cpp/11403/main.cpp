#include <iostream>

using namespace std;

int N;

bool G[100][100];

int main()
{
    cin >> N;

    fill(G[0], G[100], 100);

    for(int i = 0; i < N; i++) G[i][i] = 0;

    for(int i = 0 ; i < N; i++){
        for(int j = 0; j < N; j++) cin >> G[i][j];
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            for(int k = 0; k < N; k++){
                G[j][k] = max(G[j][k], G[j][i] && G[i][k]);
            }
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++) cout << G[i][j] << ' ';
        cout << '\n';
    }

    return 0;
}
