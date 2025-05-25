#include <iostream>

using namespace std;

int l, k;

long long m[2][100];

long long dfs(bool c, int t){
    if(t > l) return 0;
    else if(t == l) return c;

    if(m[c][t] == -1){
        if(!c) m[c][t] = dfs(!c, t + k) + dfs(!c, t + 1) + c;
        else m[c][t] = dfs(!c, t + 1) + c;
    }

    return m[c][t];
}

int main()
{
    fill(m[0], m[2], -1);

    cin >> l >> k;

    cout << dfs(false, 0);

    return 0;
}
