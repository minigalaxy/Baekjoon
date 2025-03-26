#include <iostream>

using namespace std;

int N;

int num[3];

int max_memory[6] = { 0, 0, 0, 0, 0, 0 };
int min_memory[6] = { 0, 0, 0, 900000, 900000, 900000 };

int main()
{
    cin >> N;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < 3; j++) cin >> num[j];

        for(int j = 0; j < 3; j++){
            for(int k = -1; k < 2; k++){
                if(j + k > -1 && j + k < 3) max_memory[j + k + 3] = max(max_memory[j + k + 3], max_memory[j] + num[j + k]);
                if(j + k > -1 && j + k < 3) min_memory[j + k + 3] = min(min_memory[j + k + 3], min_memory[j] + num[j + k]);
            }
        }

        for(int j = 0; j < 3; j++){
            max_memory[j] = max_memory[j + 3];
            max_memory[j + 3] = 0;

            min_memory[j] = min_memory[j + 3];
            min_memory[j + 3] = 900000;
        }
    }

    cout << max(max_memory[0], max(max_memory[1], max_memory[2])) << ' ' << min(min_memory[0], min(min_memory[1], min_memory[2]));

    return 0;
}
