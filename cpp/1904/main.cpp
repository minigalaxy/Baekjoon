#include <iostream>

using namespace std;

int N;

short memory[1000001] = { 0, 1, 2 };

int main()
{
    cin >> N;

    for(int i = 3; i <= N; i++){
        memory[i] = (memory[i - 1] + memory[i - 2]) % 15746;
    }

    cout << memory[N];

    return 0;
}
