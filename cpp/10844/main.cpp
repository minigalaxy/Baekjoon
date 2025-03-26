#include <iostream>

using namespace std;

int N;

long long m[100][10];

int res = 0;

int solve(int i, int n){
    if(i == N) return 1;

    int s = 0;

    if(n > 0){
        if(m[i][n - 1] == 0) m[i][n - 1] = (solve(i + 1, n - 1)) % 1000000000;
        s = (s + m[i][n - 1]) % 1000000000;
    }
    if(n < 9){
        if(m[i][n + 1] == 0) m[i][n + 1] = (solve(i + 1, n + 1)) % 1000000000;
        s = (s + m[i][n + 1]) % 1000000000;
    }

    return s;
}

int main()
{
    cin >> N;

    for(int i = 1; i < 10; i++) res = (res + solve(1, i)) % 1000000000;

    cout << res;

    return 0;
}
