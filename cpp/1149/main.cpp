#include <iostream>

using namespace std;

int N;

int cost[1000][3];

int memory[1000][3];

void dp(int idx, int col, int sum){
    if(idx == N) return;

    sum += cost[idx][col];

    if(memory[idx][col] <= sum && memory[idx][col] > 0) return;

    memory[idx][col] = sum;

    for(int i = 0; i < 3; i++){
        if(i != col) dp(idx + 1, i, sum);
    }
}

int main()
{
    cin >> N;

    for(int i = 0; i < N; i++) cin >> cost[i][0] >> cost[i][1] >> cost[i][2];

    dp(0, 0, 0);
    dp(0, 1, 0);
    dp(0, 2, 0);

    cout << min(memory[N - 1][0], min(memory[N - 1][1], memory[N - 1][2]));

    return 0;
}
