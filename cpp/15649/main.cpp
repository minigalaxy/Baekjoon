#include <iostream>

using namespace std;

int N, M;

int res[8];
bool used[8] = { false, };

void permutation(int r){
    if(r == 0){
        for(int i = 0; i < M; i++) cout << res[i] << ' ';
        cout << '\n';
        return;
    }

    for(int i = 1; i <= N; i++){
        if(!used[i - 1]){
            res[M - r] = i;
            used[i - 1] = true;
            permutation(r - 1);
            used[i - 1] = false;
        }
    }
}

int main()
{
    cin >> N >> M;

    permutation(1, M);

    return 0;
}
