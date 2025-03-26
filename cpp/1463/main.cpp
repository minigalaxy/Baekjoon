#include <iostream>

using namespace std;

int N;
int memory[1000001] = { 0, };

int res = 1000000;

int solve(int X, int c){
    if(c >= res || memory[X] >= res) return 1000000;

    if(X == 1){
        res = c;
        return c;
    }

    if(memory[X] > 0) res = min(res, memory[X]);
    else {
        int t = 1000000;

        if(X % 3 == 0) t = min(t, solve(X / 3, c + 1));
        if(X % 2 == 0) t = min(t, solve(X / 2, c + 1));
        t = min(t, solve(X - 1, c + 1));

        memory[X] = min(memory[X], t);

        return t;
    }
}

int main()
{
    cin >> N;

    cout << solve(N, 0) << '\n';

    return 0;
}
