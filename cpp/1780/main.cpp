#include <iostream>

using namespace std;

int N;

int mat[2188][2188];

int res[4] = { 0, 0, 0 };

int dc(int l, int r, int b, int t){
    if(l == r){
        res[mat[l][b]]++;

        return mat[l][b];
    }

    int d = (r - l + 1) / 3, p[9];

    for(int i = 0; i < 9; i++){
        p[i] = dc(l + d * (i % 3), l + d * ((i % 3) + 1) - 1, b + d * (i / 3), b + d * ((i / 3) + 1) - 1);
    }

    for(int i = 0; i < 9; i++){
        if(p[i] == 3) return 3;
    }
    for(int i = 0; i < 8; i++){
        if(p[i] != p[i + 1]) return 3;
    }

    res[p[0]] -= 8;

    return p[0];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> N;

    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            cin >> mat[j][i];
            mat[j][i]++;
        }
    }

    dc(1, N, 1, N);

    for(int i = 0; i < 3; i++) cout << res[i] << '\n';

    return 0;
}
