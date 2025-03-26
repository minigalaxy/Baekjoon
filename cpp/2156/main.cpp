#include <iostream>

using namespace std;

int n;

int q[10000];

int m[10000][3];

int solve(int i, int s){
    if(i >= n) return 0;

    if(s == 3){
        return solve(i + 1, 1);
    } else {
        if(m[i][s] == -1) m[i][s] = max(solve(i + 1, s + 1) + q[i], solve(i + 1, 1));
        return m[i][s];
    }
}

int main()
{
    cin >> n;

    for(int i = 0; i < n; i++) cin >> q[i];

    fill(m[0], m[n], -1);

    cout << solve(0, 1);

    return 0;
}
