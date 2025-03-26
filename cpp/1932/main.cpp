#include <iostream>
#include <vector>

using namespace std;

int n;

int nums[125250];
int memory[125250] = { 0, };

int res = 0;

int main()
{
    cin >> n;

    int t = 0;

    for(int i = 1; i <= n; i++){
        for(int j = 0; j < i; j++) cin >> nums[t++];
    }

    for(int i = 1; i < n; i++){
        for(int j = 0; j < i; j++){
            int idx = (i * (i - 1)) / 2 + j;

            memory[idx + i] = max(memory[idx + i], memory[idx] + nums[idx + i]);
            memory[idx + i + 1] = max(memory[idx + i + 1], memory[idx] + nums[idx + i + 1]);
        }
    }

    for(int i = 0; i < n; i++){
        if(memory[(n * (n - 1)) / 2 + i] > res) res = memory[(n * (n - 1)) / 2 + i];
    }

    cout << res + nums[0];

    return 0;
}
