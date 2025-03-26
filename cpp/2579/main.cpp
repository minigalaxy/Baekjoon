#include <iostream>

using namespace std;

int N;
int score[300];

int memory[302][2] = { 0, };

int main()
{
    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> score[i];
    }

    memory[0][0] = score[0];
    memory[1][0] = score[1];

    for(int i = 0; i < N - 1; i++){
        memory[i + 1][1] = max(memory[i + 1][1], memory[i][0] + score[i + 1]);
        memory[i + 2][0] = max(memory[i + 2][0], memory[i][0] + score[i + 2]);
        memory[i + 2][0] = max(memory[i + 2][0], memory[i][1] + score[i + 2]);
    }

    cout << max(memory[N - 1][0], memory[N - 1][1]);

    return 0;
}
