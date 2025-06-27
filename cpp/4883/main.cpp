#include <iostream>

using namespace std;

int T = 1;

int N;

int cost[3][100'000];

int m[3][100'000];

int main()
{
    while(true){
        cin >> N;

        if(N == 0) break;

        for(int i = 0; i < N; i++) m[0][i] = m[1][i] = m[2][i] = 100'000'000;

        for(int i = 0; i < N; i++){
            for(int j = 0; j < 3; j++) cin >> cost[j][i];
        }

        m[1][0] = cost[1][0];
        m[2][0] = m[1][0] + cost[2][0];

        for(int i = 0; i < N - 1; i++){
            for(int j = 0; j < 2; j++) m[j + 1][i] = min(m[j + 1][i], m[j][i] + cost[j + 1][i]);
            for(int j = 0; j < 3; j++) m[j][i + 1] = min(m[j][i + 1], m[j][i] + cost[j][i + 1]);
            for(int j = 0; j < 2; j++) m[j + 1][i + 1] = min(m[j + 1][i + 1], m[j][i] + cost[j + 1][i + 1]);
            for(int j = 1; j < 3; j++) m[j - 1][i + 1] = min(m[j - 1][i + 1], m[j][i] + cost[j - 1][i + 1]);
        }

        cout << T << ". " << min(m[1][N - 1], m[0][N - 1] + cost[1][N - 1]) << '\n';

        T++;
    }

    return 0;
}
