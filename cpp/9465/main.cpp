#include <iostream>
#include <vector>

using namespace std;

int T, n;

int score[100001][2];
int memory[100001][2];

vector<int> res;

int main()
{
    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> n;

        for(int j = 0; j < 2; j++){
            for(int k = 0; k < n; k++){
                cin >> score[k][j];
            }
        }

        memory[0][0] = score[0][0];
        memory[0][1] = score[0][1];

        for(int j = 1; j < n; j++){
            memory[j][0] = 0;
            memory[j][1] = 0;
        }

        for(int j = 0; j < n - 1; j++){
            for(int k = 0; k < 2; k++){
                memory[j + 1][!k] = max(memory[j + 1][!k], memory[j][k] + score[j + 1][!k]);
                memory[j + 2][!k] = max(memory[j + 2][!k], memory[j][k] + score[j + 2][!k]);
            }
        }

        res.push_back(max(memory[n - 1][0], memory[n - 1][1]));
    }

    for(int t: res) cout << t << '\n';

    return 0;
}
