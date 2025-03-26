#include <iostream>

using namespace std;

int N;

int visited[14][14] = { 0, };

int res = 0;

void bt(int y){
    if(y == N){
        res++;

        return;
    }

    for(int x = 0; x < N; x++){
        if(visited[x][y] == 0){
            for(int i = 0; i < x; i++){
                if(y + x - i < N) visited[i][y + x - i]++;
            }
            for(int i = x + 1; i < N; i++){
                if(y + i - x < N) visited[i][y + i - x]++;
            }
            for(int i = y + 1; i < N; i++) visited[x][i]++;

            bt(y + 1);

            for(int i = 0; i < x; i++){
                if(y + x - i < N) visited[i][y + x - i]--;
            }
            for(int i = x + 1; i < N; i++){
                if(y + i - x < N) visited[i][y + i - x]--;
            }
            for(int i = y + 1; i < N; i++) visited[x][i]--;
        }
    }
}

int main()
{
    cin >> N;

    bt(0);

    cout << res;

    return 0;
}
