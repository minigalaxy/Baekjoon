#include <iostream>

#define MAX 64000000

using namespace std;

int N, M, B;

int mat[500][500];

int res = MAX, res_h;

int max_h = 0, min_h = 256;

int solve(int h, int b){
    int tmp = 0;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(mat[j][i] > h){
                b += mat[j][i] - h;
                tmp += 2 * (mat[j][i] - h);
            } else if(mat[j][i] < h){
                b -= h - mat[j][i];
                tmp += h - mat[j][i];
            }
        }
    }

    if(b >= 0) return tmp;
    else return MAX;
}

int main()
{
    cin >> N >> M >> B;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            int t;
            cin >> t;

            if(t > max_h) max_h = t;
            if(t < min_h) min_h = t;

            mat[j][i] = t;
        }
    }

    for(int h = max_h; h >= min_h; h--){
        int tmp = solve(h, B);

        if(tmp < res){
            res = tmp;
            res_h = h;
        }
    }

    cout << res << ' ' << res_h;

    return 0;
}
