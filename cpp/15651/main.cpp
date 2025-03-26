#include <iostream>

using namespace std;

int N, M;

int res[8];

void permutation(int r){
    if(r == 0){
        for(int i = 0; i < M; i++) cout << res[i] << ' ';
        cout << '\n';
        return;
    }

    for(int i = 1; i <= N; i++){
        res[M - r] = i;
        permutation(r - 1);
    }
}

int main()
{
    cin >> N >> M;

    permutation(M);

    return 0;
}
